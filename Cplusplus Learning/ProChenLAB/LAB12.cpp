#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i, Oper,num=1,ib=0,j;
	string Det;
	string **Information = new string*[100];
	while(1)
	{
		cout << "Enter your option" << endl << "1: Add a new student" << endl << "2: Display all students" << endl << "3: Search student" << endl << "0: Exit" << endl;
		cin >> Oper;
		if(Oper == 0)
		{
			for(i=0;i<4;i++)
			{
				delete [] Information[i];
			}
			delete [] Information;
			Information = NULL;
			break;
		}else if(Oper == 1)
		{
			*(Information+ib) = new string[4];
			cout << "Enter student's name" << endl;
			cin >> Det;
			Information[ib][0] = Det;
			cout << "Enter student's id" << endl;
			cin >> Det;
			Information[ib][1] = Det;
			cout << "Enter student's course" << endl;
			cin >> Det;
			Information[ib][2] = Det;
			cout << "Enter student's grade" << endl;
			cin >> Det;
			Information[ib][3] = Det;
			cout << endl;
			ib++;
		}else if(Oper == 2)
		{
			cout << "All Students:" << endl;
			for(i=0;i<ib;i++)
			{
				cout << "Name: " << Information[i][0] << ", " << "ID: " << Information[i][1] << ", " << "Course: " << Information[i][2] << ", " << "Grade: " << Information[i][3] << endl;
			}
			cout << endl;
		}else if(Oper == 3)
		{
			bool S=false;
			int tmp;
			cout << "Enter student's id" << endl;
			cin >> Det;
			cout << "Search Results:" << endl;
			for(i=0;i<ib;i++)
			{
				if(Information[i][1] == Det)
				{
					cout << "Name: " << Information[i][0] << ", " << "ID: " << Information[i][1] << ", " << "Course: " << Information[i][2] << ", " << "Grade: " << Information[i][3] << endl;
					cout << endl;
					S = true;
					break;
					
				}
			}
			if(S == false)
			{
				cout << "Student with ID " << Det << " not found." << endl;
				cout << endl;
			}
		}
	}
	
	return 0;
}