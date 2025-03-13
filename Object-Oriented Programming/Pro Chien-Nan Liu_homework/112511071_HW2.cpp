#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int JumpIt(int a[], int Step);

int main()
{
    ifstream in;
    int Step,i,tmp;
	string Filename;
    cout << "Please enter the filename: ";
    cin >> Filename;
    in.open(Filename);
    if(in.fail())
	{
		cout << "No!" << endl;
	}
    in >> Step;
    int* a = new int[Step];
    for(i=0;i<Step;i++)
    {
        in >> a[i];
    }
    tmp = JumpIt(a,Step);
	cout << "The lowest cost is " << tmp << endl;
    in.close();
    return 0;
}

int JumpIt(int a[], int Step)
{
	int A,B;
	if(Step < 0)
	{
		return 0;
	}else if(Step==0)
	{
		return 0;
	}else
	{
		A = JumpIt(a, Step-1) + a[Step -1];
		B = JumpIt(a, Step-2) + a[Step -1];
	}
	return min(A,B);
}