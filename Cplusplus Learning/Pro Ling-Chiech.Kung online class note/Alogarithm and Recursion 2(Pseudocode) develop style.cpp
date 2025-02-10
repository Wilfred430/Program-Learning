#include<iostream>
using namespace std;

void isPrime(int n);

int main()
{
    int n,i,j;
    cout << "Please enter a number that you want to check whether is prime number: " ;
    cin >> n;

    isPrime(n);

    return 0;
}

void isPrime(int n)
{
    int i,j;
    for(i = 2 ; i < n;i++)
	{
		bool isPrime = true;
		for(j = 2;j*j <= i;j++)
		{
			if(i % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if(isPrime == true)
		{
			cout << i << endl;
		}
	}
}
