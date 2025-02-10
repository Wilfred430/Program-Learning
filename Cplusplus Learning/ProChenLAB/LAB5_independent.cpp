#include<iostream>
using namespace std;

int Date(int year, int month, int day);

void printDay(int h);

void printCalendar(int year, int month, int day, int h);

int main()
{
	int year, month, day, h;
	
	while(1)
	{
		cout << "Input the date:";
		cin >> year >> month >> day;
		if((year == 0)&&(month == 0)&&(day == 0))
		{
			break;
		}
		h = Date(year, month, day);
		printDay(h);
		printCalendar(year,month,day,h);
			
	}
	return 0;
}

int Date(int year, int month, int day)
{
	int k, t, m, h;
	k = year + (year - 1)/4 - (year - 1)/100 + (year - 1)/400;
	if(((year % 4) == 0) && ((year % 100) != 0) || ((year % 400) == 0))
	{
		t = 1;
	}else
	{
		t = 0;
	}
	if(t == 1)
	{
		switch(month)
		{
			case 1:
				m = day;
				break;
			case 2:
				m = 31 + day;
				break;
			case 3:
				m = 31 + 29 + day;
				break;
			case 4:
				m = 31 + 29 + 31 + day;
				break;
			case 5:
				m = 31 + 29 + 31 + 30 + day;
				break;
			case 6:
				m = 31 + 29 + 31 + 30 + 31 + day;
				break;
			case 7:
				m = 31 + 29 + 31 + 30 + 31 + 30 + day;
				break;
			case 8:
				m = 31 + 29 + 31 + 30 + 31 + 30 + 31 + day;
				break;
			case 9:
				m = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day;
				break;
			case 10:
				m = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
				break;
			case 11:
				m = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
				break;
			case 12:
				m = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
				break;
		}
	}else if(t == 0)
	{
		switch(month)
		{
			case 1:
				m = day;
				break;
			case 2:
				m = 31 + day;
				break;
			case 3:
				m = 31 + 28 + day;
				break;
			case 4:
				m = 31 + 28 + 31 + day;
				break;
			case 5:
				m = 31 + 28 + 31 + 30 + day;
				break;
			case 6:
				m = 31 + 28 + 31 + 30 + 31 + day;
				break;
			case 7:
				m = 31 + 28 + 31 + 30 + 31 + 30 + day;
				break;
			case 8:
				m = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
				break;
			case 9:
				m = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
				break;
			case 10:
				m = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
				break;
			case 11:
				m = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
				break;
			case 12:
				m = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
				break;
		}
	}
	return h = (k + (m % 7) - 1)%7;
}

void printDay(int h)
{
	switch(h)
		{
			case 0:
				cout << "Sunday" << endl;
				break;
			case 1:
				cout << "Monday" << endl;
				break;
			case 2:
				cout << "Tuesday" << endl;
				break;
			case 3:
				cout << "Wednesday" << endl;
				break;
			case 4:
				cout << "Thursday" << endl;
				break;
			case 5:
				cout << "Friday" << endl;
				break;
			case 6:
				cout << "Saturday" << endl;
				break;
		}
	
	return ;
}

void printCalendar(int year, int month, int day, int h)
{
	int t,i,g;
	
	g = (h + 35 - day + 1)%7;
	
	if(((year % 4) == 0) && ((year % 100) != 0) || ((year % 400) == 0))
	{
		t = 1;
	}else
	{
		t = 0;
	}
	cout << " SU MO TU WE TH FR SA" << endl;
	
	if((t == 1)&&(month == 2))
	{
		if(g < 6)
		{
			for(i = 1; i <= g; i++)
			{
				cout << "   " ;
			}
			for(i = 1; i <= (7-g);i++)
			{
				cout << "  " << i;
			}
			cout << endl;
			for(i = (8 - g);i < (15 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (15 - g);i < (22 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (22 - g);i < (29 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (29 - g);i < (36 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else if(i > 29)
				{
					break;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
		}else
		{
			for(i = 1; i <= (g); i++)
			{
				cout << "   " ;
			}
			for(i = 1; i <= (7-g);i++)
			{
				cout << "  " << i;
			}
			cout << endl;
			for(i = (8 - g);i < (15 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (15 - g);i < (22 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (22 - g);i < (29 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (29 - g);i < (36 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else if(i > 29)
				{
					break;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
		}
	}
	if((t == 0)&&(month == 2))
	{
		if(h < 6)
		{
			for(i = 1; i <= g; i++)
			{
				cout << "   " ;
			}
			for(i = 1; i <= (7-g);i++)
			{
				cout << "  " << i;
			}
			cout << endl;
			for(i = (8 - g);i < (15 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (15 - g);i < (22 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (22 - g);i < (29 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (29 - g);i < (36 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else if(i > 28)
				{
					break;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
		}else
		{
			for(i = 1; i <= (g); i++)
			{
				cout << "   " ;
			}
			for(i = 1; i <= (7-g);i++)
			{
				cout << "  " << i;
			}
			cout << endl;
			for(i = (8 - g);i < (15 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (15 - g);i < (22 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (22 - g);i < (29 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (29 - g);i < (36 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else if(i > 28)
				{
					break;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
		}
	}
	if(month != 2)
	{
			if(month == 1 || month == 3 || month == 5||month == 7||month == 8||month == 10||month == 12)
			{
				for(i = 1; i <= (g); i++)
			{
				cout << "   " ;
			}
			for(i = 1; i <= (7-g);i++)
			{
				cout << "  " << i;
			}
			cout << endl;
			for(i = (8 - g);i < (15 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (15 - g);i < (22 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (22 - g);i < (29 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (29 - g);i < (36 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else if(i > 31)
				{
					break;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (36 - g);i < (43 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else if(i > 31)
				{
					break;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			}
			if(month == 4 || month == 6 || month == 9||month == 11)
			{
				for(i = 1; i <= (g); i++)
			{
				cout << "   " ;
			}
			for(i = 1; i <= (7-g);i++)
			{
				cout << "  " << i;
			}
			cout << endl;
			for(i = (8 - g);i < (15 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (15 - g);i < (22 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (22 - g);i < (29 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			for(i = (29 - g);i < (36 - g);i++)
			{
				if(i < 10)
				{
					cout << "  " << i;
				}else if(i > 30)
				{
					break;
				}else
				{
					cout << " " << i;
				}
			}
			cout << endl;
			}
	}
	
	cout << "--------------------" << endl;
}
