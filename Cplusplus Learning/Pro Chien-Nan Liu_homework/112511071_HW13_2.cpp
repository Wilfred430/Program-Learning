#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
#include<iterator>
using namespace std;

template<typename T>
class Duplicate
{
    private:
        set<T> Name;
    public:
        void SetName(const T Na)
        {
            this->Name.insert(Na);
        }
        void Output()
        {
            for(auto it = Name.begin();it != Name.end();it++)
            {
                cout << *it << endl;
            }
        }
};

int main(int argc,char* argv[])
{
    ifstream input;
    input.open(argv[1]);

    Duplicate<string> Du;
    string Na;

    while(getline(input, Na))
    {
        Du.SetName(Na);
    }
    Du.Output();

    input.close();

    return 0;
}