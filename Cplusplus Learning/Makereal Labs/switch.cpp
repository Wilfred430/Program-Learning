#include<iostream>
using namespace std;

int main()
{
    int command;
    cin >> command;

    switch(command)
    {
        case 1:
            cout << "大麥克" << endl;
            break;
        case 2:
            cout << "勁辣雞腿堡" << endl;
            break;
        case 3:
            cout << "麥克雞塊" << endl;
            break;
        default:
            cout << "無效套餐" << endl;
            break;
    }

    return 0;
}