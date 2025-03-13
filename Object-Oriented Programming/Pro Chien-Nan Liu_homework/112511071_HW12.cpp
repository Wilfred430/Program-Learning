#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>
using namespace std;

template<class T>
class RPNcalculator
{
    private:
        vector<T> v;
    public:
        void addNumber(const T Num)
        {
            this->v.push_back(Num);
        }
        T getLength()
        {
            return this->v.size();
        }
        T getLast()
        {
            return this->v[this->v.size()-1];
        }
        void Operation(const char Ope)
        {
            T value1, value2;
            value1 = this->v[this->v.size() -1];
            this->v.pop_back();
            value2 = this->v[this->v.size() -1];
            this->v.pop_back();

            switch (Ope)
            {
                case '+':
                    this->v.push_back(value2 + value1);
                    break;
                case '-':
                    this->v.push_back(value2 - value1);
                    break;
                case '*':
                    this->v.push_back(value2 * value1);
                    break;
                case '/':
                    this->v.push_back(value2 / value1);
            }
        }
};

int main()
{
    string N;
    RPNcalculator<int> RPN;

    while (cin >> N)
    {
        if(N != "+" && N != "-" && N != "*" && N != "/" && N != "q")
        {
            int Num = 0;
            for(int i=0;i < N.length();i++)
            {
                Num += (int(N[i] - int('0')))*pow(10,(N.length()-i)-1);
            }
            RPN.addNumber(Num);
        }else if(N == "q")
        {
            cout << "The top of the stack is : " << RPN.getLast() << endl;
            break;
        }else if(RPN.getLength() < 2)
        {
            cout << "ERROR!!!" << endl;
            break;
        }else if(N == "/" && RPN.getLast() == 0)
        {
            cout << "ERROR!!!" << endl;
            break;
        }else
        {
            char Ope = N[0];
            RPN.Operation(Ope);
        }
    }
    
    return 0;
}