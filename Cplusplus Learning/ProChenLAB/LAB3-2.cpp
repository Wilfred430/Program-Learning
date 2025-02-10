#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i, num, tmp;
    while(1)
    {
        cout << "Please enter a number:" ;
        cin >> num;
        if(num == 1)
        {
            cout << "1 = 1";
            break;
        }
        tmp = sqrt(num);
        for(i = 1 ; i <= tmp ; i++)
        {
            if((num%i)==0)
            {
                cout << num << " = " << i << " * " << num/i << endl;
            }
        }
    }
    return 0;
}