#include<iostream>
using namespace std;

int main()
{
    double H, T;
    int D;
    char G;

    cout << "############### Paid Calculator ###############"<<endl;
    cout << "Enter the number of hours worked in a week: " ;
    cin >> H;
    if(H > 40)
    {
        T = 16.78 * H + 16.78 * 0.50 *(H-40);
    }
    else
    {
        T = 16.78 * H;
    }
    if(H > 168 || H < 4)
    {
        cout << "Enter the number of hours worked in a week: " ;
        cin >> H;
    }
    cout << "Enter the number of dependents: ";
    cin >> D;
    cout << "Gross Pay: " << "$" << T << endl;
    cout << "Social Security Tax: " << "$" << 0.06*T << endl;
    cout << "Federal Income Tax: " << "$" << 0.14*T << endl;
    cout << "State Income Tax: " << "$" << 0.05*T << endl;
    cout << "Union Dues: " << "$10" << endl;
    if(D >= 3 )
    {
        cout << "Health Insurance: " << "$35" << endl;
        cout << "Net Take-Home Pay: " << "$" << 0.75*T-35-10 << endl;
        cout << "###############################################"<<endl;
    }else
    {
        cout << "Net Take-Home Pay: " << "$" << 0.75*T-10 << endl;
        cout << "###############################################"<<endl;
    }
    while(1)
    {
        cout << "Do you want to calculate again? (yY/nN): ";
        cin >> G;
        if(G == 'y' || G == 'Y')
        {
            cout << "############### Paid Calculator ###############"<<endl;
            cout << "Enter the number of hours worked in a week: " ;
            cin >> H;
            if(H > 40)
        {
            T = 16.78 * H + 16.78 * 0.50 *(H-40);
        }
        else
        {
            T = 16.78 * H;
        }
            if(H > 168 || H < 4)
            {
                cout << "Enter the number of hours worked in a week: " ;
                cin >> H;
            }
            cout << "Enter the number of dependents: ";
            cin >> D;
            cout << "Gross Pay: " << "$" << T << endl;
            cout << "Social Security Tax: " << "$" << 0.06*T << endl;
            cout << "Federal Income Tax: " << "$" << 0.14*T << endl;
            cout << "State Income Tax: " << "$" << 0.05*T << endl;
            cout << "Union Dues: " << "$10" << endl;
            if(D >= 3 )
            {
                cout << "Health Insurance: " << "$35" << endl;
                cout << "Net Take-Home Pay: " << "$" << 0.75*T-35-10 << endl;
                cout << "###############################################"<<endl;
            }else
            {
                cout << "Net Take-Home Pay: " << "$" << 0.75*T-10 << endl;
                cout << "###############################################"<<endl;
            }
        }
        else if(G == 'n' || G == 'N')
        {
            cout << "Thanks for using the Paid Calculator, Bye" << endl;
            break;
        }
    }
    
    return 0;
}
