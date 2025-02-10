#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
    string Month;
    int Date, M;

    while(1)
    {
        cout << "Input the month:";
        cin >> Month;
        if(Month == "done"||Month == "Done")
        {
            break;
        }
        cout << "Input the date:";
        cin >> Date;
        if(((Month == "January")||(Month == "january")||(Month == "March")||(Month == "march")||(Month == "May")||(Month == "may")||(Month == "July")||(Month == "july")||(Month == "August")||(Month == "august")||(Month == "Octobor")||(Month == "octobor")||(Month == "December")||(Month == "december"))&&((Date <= 0)||(Date > 31)))
        {
            cout << "Wrong date !" << endl;
            continue;
        }else if(((Month == "April")||(Month == "april")||(Month == "June")||(Month == "june")||(Month == "September")||(Month == "september")||(Month == "November")||(Month == "november"))&&((Date <= 0)||(Date > 30)))
        {
            cout << "Wrong date !" << endl;
            continue;
        }else if(((Month == "February")||(Month == "february"))&&((Date <= 0)||(Date > 29)))
        {
            cout << "Wrong date !" << endl;
            continue;
        }
        if(Month == "January"||Month == "january")
        {
            M = 1;
        }else if(Month == "February"||Month == "february")
        {
            M = 2;
        }else if(Month == "March"||Month == "march")
        {
            M = 3;
        }else if(Month == "April"||Month == "april")
        {
            M = 4;
        }else if(Month == "May"||Month == "may")
        {
            M = 5;
        }else if(Month == "June"||Month == "june")
        {
            M = 6;
        }else if(Month == "July"||Month == "july")
        {
            M = 7;
        }else if(Month == "August"||Month == "august")
        {
            M = 8;
        }else if(Month == "September"||Month == "september")
        {
            M = 9;
        }else if(Month == "October"||Month == "october")
        {
            M = 10;
        }else if(Month == "November"||Month == "november")
        {
            M = 11;
        }else if(Month == "December"||Month == "december")
        {
            M = 12;
        }else if(Month == "1")
        {
            M = 1;
        }else if(Month == "2")
        {
            M = 2;
        }else if(Month == "3")
        {
            M = 3;
        }else if(Month == "4")
        {
            M = 4;
        }else if(Month == "5")
        {
            M = 5;
        }else if(Month == "6")
        {
            M = 6;
        }else if(Month == "7")
        {
            M = 7;
        }else if(Month == "8")
        {
            M = 8;
        }else if(Month == "9")
        {
            M = 9;
        }else if(Month == "10")
        {
            M = 10;
        }else if(Month == "11")
        {
            M = 11;
        }else if(Month == "12")
        {
            M = 12;
        }

        switch(M)
        {
            case 3: case 4:
                if(M == 3 && Date < 21)
                {
                    cout << "Pisces" << endl;
                }
                if((M == 3 && Date >= 21)||(M == 4 && Date <= 19))
                {
                    cout << "Aries" << endl;
                }
                if((M == 4 && Date > 19))
                {
                    cout << "Taurus" << endl;
                }
                break;
            case 5:
                if(Date <= 20)
                {
                    cout << "Taurus" << endl;
                }else
                {
                    cout << "Gemini" << endl;
                }
                break;
            case 6:
                if(Date <= 21)
                {
                    cout << "Gemini" << endl;
                }else
                {
                    cout << "Cancer" << endl;
                }
                break;
            case 7:
                if(Date <= 22)
                {
                    cout << "Cancer" << endl;
                }else
                {
                    cout << "Leo" << endl;
                }
                break;
            case 8:
                if(Date <= 22)
                {
                    cout << "Leo" << endl;
                }else
                {
                    cout << "Virgo" << endl;
                }
                break;
            case 9:
                if(Date <= 22)
                {
                    cout << "Virgo" << endl;
                }else
                {
                    cout << "Libra" << endl;
                }
                break;
            case 10:
                if(Date <= 22)
                {
                    cout << "Libra" << endl;
                }else
                {
                    cout << "Scorpio" << endl;
                }
                break;
            case 11:
                if(Date <= 21)
                {
                    cout << "Scorpio" << endl;
                }else
                {
                    cout << "Sagittarius" << endl;
                }
                break;
            case 12:
                if(Date <= 21)
                {
                    cout << "Sagittarius" << endl;
                }else
                {
                    cout << "Capricorn" << endl;
                }
                break;
            case 1:
                if(Date <= 19)
                {
                    cout << "Capricorn" << endl;
                }else
                {
                    cout << "Aquarius" << endl;
                }
                break;
            case 2:
                if(Date <= 18)
                {
                    cout << "Aquarius" << endl;
                }else
                {
                    cout << "Pisces" << endl;
                }
                break;
        }
    }
    return 0;
}