#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<iomanip>
using namespace std;

struct Movie
{
    int Rates;
    int Count;
};

int main(int argc, char* argv[])
{
    ifstream input;
    input.open(argv[1]);

    if(input.fail())
    {
        cout << "ERROR!!!" << endl;
    }

    map<string,Movie*> Mo;
    vector<string> Out;
    int RateNum,Rate;
    string MovieName;
    input >> RateNum;
    input.ignore(); //讀掉換行字元

    for(int i=0;i<RateNum;i++)
    {
        getline(input,MovieName);
        input >> Rate;
        input.ignore(); //讀掉換行字元
        if(Mo.find(MovieName) != Mo.end()) //map.find() 會回傳map
        {
            Mo[MovieName]->Rates += Rate;
            Mo[MovieName]->Count++;
            continue;
        }
        Mo.insert(pair<string,Movie*>(MovieName, new Movie{Rate,1}));
        Out.push_back(MovieName);
    }
    sort(Out.begin(), Out.end());

    for(int i=0;i<Out.size();i++)
    {
      if(Mo[Out[i]]->Count == 1)
      {
        cout << Out[i] << ": " << Mo[Out[i]]->Count << " review, " << "average of " << setprecision(2) << static_cast<double>(Mo[Out[i]]->Rates) / Mo[Out[i]]->Count << " / " << "5" << endl;
      }else
      {
        cout << Out[i] << ": " << Mo[Out[i]]->Count << " reviews, " << "average of " << setprecision(2) << static_cast<double>(Mo[Out[i]]->Rates) / Mo[Out[i]]->Count << " / " << "5" << endl;
      }
    }

    input.close();

    return 0;
}