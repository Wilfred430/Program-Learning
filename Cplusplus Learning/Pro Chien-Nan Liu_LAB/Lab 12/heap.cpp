#include "heap.hpp"
#include <fstream>
#include <cmath>

vector<int> Circuit::readinput(string filename){
    vector<int> delay;
    ifstream fin(filename);
    string input;
    fin >> input;
    gatecount=stoi(input);
    for(int i=0;i<gatecount;++i){
        int temp;
        fin >> input;
        temp=stoi(input);
        delay.push_back(temp);
    }
    make_heap (delay.begin(),delay.end());
    return delay;
}

void Circuit::printout(){
    for(auto a:gate_list)
        cout<<a->gatetype<<a->gateID<<" ("<<a->outputnode<<","<<a->inputnodeA<<","<<a->inputnodeB<<");"<<endl;
}

bool sortbydelay(Gate *a,Gate *b){
    //vvvv write your code here vvvv
    return (a->delay > b->delay);
    //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
}

void Circuit::buildgate(vector<int> &list){
    //vvvv write your code here vvvv
    for(int i=0;i<gatecount;i++)
    {
        this->gate_list.push_back(new Gate{0,0,"","","",""});
    }
    int Chi1,Chi2;
    for(int i=0;i<list.size();i++)
    {
        if(2*i+1 < list.size())
        {
            Chi1 = list[2*i+1];
        }else
        {
            Chi1 = 0;
        }
        if(2*i+2 < list.size())
        {
            Chi2 = list[2*i+2];
        }else
        {
            Chi2 = 0;
        }
        this->gate_list[i]->delay = list[i] - max(Chi1,Chi2);
        switch(this->gate_list[i]->delay)
        {
            case 30:
                this->gate_list[i]->gatetype = "XOR";
                this->gate_list[i]->gateID = this->xorcount;
                this->xorcount++;
                break;
            case 25:
                this->gate_list[i]->gatetype = "AND";
                this->gate_list[i]->gateID = this->andcount;
                this->andcount++;
                break;
            case 20:
                this->gate_list[i]->gatetype = "OR";
                this->gate_list[i]->gateID = this->orcount;
                this->orcount++;
                break;
            case 15:
                this->gate_list[i]->gatetype = "NAND";
                this->gate_list[i]->gateID = this->nandcount;
                this->nandcount++;
                break;
            case 10:
                this->gate_list[i]->gatetype = "NOR";
                this->gate_list[i]->gateID = this->norcount;
                this->norcount++;
                break;
        }
        if(i==0)
        {
            this->gate_list[i]->outputnode = "outputnode";
            this->gate_list[i]->inputnodeA = "n1";
            this->gate_list[i]->inputnodeB = "n2";
        }else
        {
            this->gate_list[i]->outputnode = "n"+ to_string(i);
            if(Chi1 != 0)
            {
                this->gate_list[i]->inputnodeA = "n" + to_string(2*i+1);
            }else
            {
                this->gate_list[i]->inputnodeA = "inputnode";
            }
            if(Chi2 != 0)
            {
                this->gate_list[i]->inputnodeB = "n" + to_string(2*i+2);
            }else
            {
                this->gate_list[i]->inputnodeB = "inputnode";
            }
        }
    }
    //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    sort(gate_list.begin(),gate_list.end(),sortbydelay);
}
