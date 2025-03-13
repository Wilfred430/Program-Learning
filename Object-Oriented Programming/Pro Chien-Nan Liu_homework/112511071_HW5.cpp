#include<iostream>
using namespace std;

class AccountNumber
{
    private:
        int* Account;
        int Size;
    public:
        AccountNumber();
        ~AccountNumber();
        int* getAccount();
        int getSize();
        void CheckValid();
        void Print();
};

AccountNumber::AccountNumber()
{
    cout << "Please enter the account's length:";
    cin >> Size;
    char* Tmp = new char[Size];
    Account = new int[Size];
    cout << "Please enter your account number:";
    for(int i=(Size - 1);i>=0;i--)
    {
        cin >> Tmp[i];
        Account[i] = static_cast<int>(Tmp[i]) - static_cast<int>('0');
    }
    delete [] Tmp;
}

AccountNumber::~AccountNumber()
{
	delete [] Account;
}

int* AccountNumber::getAccount()
{
	return Account;
}

int AccountNumber::getSize()
{
	return Size;
}

void AccountNumber::CheckValid()
{
    int Sum = 0;
    int* Tmp = new int[Size];
    for(int i=0;i<Size;i++)
    {
        if(i%2 != 0)
        {
            if(Account[i]*2 > 9)
            {
                Tmp[i] = Account[i]*2 - 9;
            }else
            {
                Tmp[i] = Account[i]*2;
            }
        }else
        {
            Tmp[i] = Account[i];
        }
        Sum = Sum + Tmp[i];
    }
    if(Sum % 10 == 0)
    {
        cout << "Account number is valid." << endl;
        cout << "Account Number:";
        for(int i=Size-1;i>=0;i--)
        {
            cout << Account[i];
        }
        cout << endl;
    }else
	{
		cout << "Account number is not valid." << endl;
		int Gap = ((Sum/10)+1)*10 - Sum;
		Account[0]+=Gap;
		cout << "Correct Account Number:";
		for(int i=Size-1;i>=0;i--)
		{
			cout << Account[i];
		}
	}
    delete [] Tmp;
}

void AccountNumber::Print()
{
	for(int i=Size-1;i>=0;i--)
	{
		cout << Account[i];
	}
	cout << endl;
}

int main()
{
    AccountNumber Acc;
    Acc.CheckValid();
    return 0;
}