#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int N,i;
    long double sum = 0;
    cin >> N;
    long double* a = new long double[N]; 
    for(i=0;i<N;i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << setprecision(12) << sum/N << endl;
    
    return 0;
}