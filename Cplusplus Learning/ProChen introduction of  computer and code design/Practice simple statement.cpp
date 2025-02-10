#include<iostream>
using namespace std;

int main()
{
    int numberofpods, peasperpod, totalpeas;
    cout << "Press return after entering a number. \n";
    cout << " Enter the number of pods: \n";
    cin >> numberofpods;
    cout << "Enter the number of peas in a pod: \n";
    cin >> peasperpod;
    totalpeas = numberofpods * peasperpod;
    cout << "If you have " << numberofpods <<  "pea pods \n" ;
    cout << "and " << peasperpod << " peas in each pod , then \n";
    cout << "you have " << totalpeas << " peas in all the pods. \n";

    return 0;
}