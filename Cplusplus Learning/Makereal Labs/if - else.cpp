#include<iostream>
using namespace std;

int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if(score <= 100 && score >= 80)
    {
        cout << "A" << endl;
    }else if(score <= 79 && score >= 60)
    {
        cout << "B" << endl;
    }else
    {
        cout << "C" << endl;
    }

    return 0;
}