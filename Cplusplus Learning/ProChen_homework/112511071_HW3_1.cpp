#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int times;
    float INTEREST, REST, OINTEREST, N;
    cout << "Enter loan :" ;
    cin >> N;

    times = 0;
    OINTEREST = 0;
    while(N > 0)
    {
        INTEREST = ceil( N*0.015*100)/100;
        REST = ceil((50 - INTEREST)*100)/100;
        N = ceil( (N - REST)*100)/100;
        times++;
        OINTEREST = OINTEREST + INTEREST;
        OINTEREST = OINTEREST * 100;
        double ceil(double OINTEREST);
        OINTEREST = OINTEREST /100;
    }
    cout << "How many months it will take you to pay off the loan: " << times << endl;
    cout << "The total amount of interest is: " << OINTEREST;

    return 0;

}