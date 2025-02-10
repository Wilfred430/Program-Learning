#include<iostream>
#include<iomanip>
using namespace std;

int Determine(int y);

int Date2Day(int y, int m, int d, int t);

void printDay(int h);

void printCalendar(int m, int h, int t, int d);

int main()
{
    int y,m,d,t,h;

    while(1)
    {
        cout << "Input the date:";
        cin >> y >> m >> d;
        if((y == 0)&&(m == 0)&&(d == 0))
        {
            break;
        }
        t = Determine(y);
        h = Date2Day( y, m, d, t);
        printDay(h);
        printCalendar( m, h, t, d);
    }
    return 0;
}

int Determine(int y)
{
    if((((y % 4) == 0)&&((y % 100) != 0))||(y % 400) == 0)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int Date2Day(int y, int m, int d, int t)
{
    int q,r;
    q = (y + (y - 1)/4 - (y - 1)/100 + (y - 1)/400) % 7;
    if(t == 1)
    {
        switch(m)
        {
            case 1:
                r = (d%7 + q)%7;
                break;
            case 2:case 8:
                r = (3 + d%7 + q)%7;
                break;
            case 3:case 11:
                r = (4 + d%7 + q)%7;
                break;
            case 4: case 7:
                r = (0 + d%7 + q)%7;
                break;
            case 5:
                r = (2 + d%7 + q)%7;
                break;
            case 6:
                r = (5 + d%7 + q)%7;
                break;
            case 9:case 12:
                r = (6 + d%7 + q)%7;
                break;
            case 10:
                r = (1 + d%7 + q)%7;
                break;
        }   
    }else if(t == 0)
    {
        switch(m)
        {
            case 10:
                r = (0 + d%7 + q)%7;
                break;
            case 5:
                r = (1 + d%7 + q)%7;
                break;
            case 8:
                r = (2 + d%7 + q)%7;
                break;
            case 2:case 3:case 11:
                r = (3 + d%7 + q)%7;
                break;
            case 6:
                r = (4 + d%7 + q)%7;
                break;
            case 12:case 9:
                r = (5 + d%7 + q)%7;
                break;
            case 4:case 7:
                r = (6 + d%7 + q)%7;
                break;
        }
    }
    return (r+6)%7;
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

void printCalendar(int m, int h, int t, int d)
{
    int k,i,j;
    k = (h + 35 - d)%7;
    cout << " SU MO TU WE TH FR SA" << endl;

    if(t == 1)
    {
        switch(m)
        {
            case 2:
                if(k != 0)
                {
                    for(i = 1; i < k+2;i++)
                        cout << "   ";
                }
                for(i = k; i < 7-k;i++)
                    cout << "  " << i ;
                if(k == 7-k)
                {
                    cout << "  " << k;
                }
                cout << endl;
                for(j = 7-k;j <36;j += 7)
                {
                    for(i = j;i < j+7;i++)
                    {
                        if(i > 29)
                            break;
                        cout << setw(3) << i;
                    }
                    if(j > 29)
                        break;
                    cout << endl;
                }
                break;
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                if(k != 0)
                {
                    for(i = 1; i < k+2;i++)
                        cout << "   ";
                }
                for(i = k; i < 7-k;i++)
                     cout << "  " << i ;
                if(k == 7-k)
                {
                    cout << "  " << k;
                }
                cout << endl;
                for(j = 7-k;j <40;j += 7)
                {
                    for(i = j;i < j+7;i++)
                    {
                        if(i > 31)
                            break;
                        cout << setw(3) << i;
                    }
                    if(j > 31)
                        break;
                    cout << endl;
                }
        }
    }

    cout << "--------------------" << endl;
}