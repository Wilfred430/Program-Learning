#include<iostream>
#include<cstring>
using namespace std;

//getline()

// int main()
// {
//     string Myvector;
//     getline(cin, Myvector);
//     cout << Myvector << endl;
//     cout << Myvector[0] << endl;

//     return 0;
// }

// int main()
// {
//     string myvector;
//     getline(cin , myvector, 'o');
//     cout << myvector << endl;
//     cout << myvector[myvector.length()-1] << endl;

//     return 0;
// }

//substr(head,length)

// int main()
// {
//     string s = "abcdefg";
//     cout << s.substr(2,4) << endl;
//     cout << s.substr(2) << endl;

//     return 0;
// }

//find()

int main()
{
    string s="abcdefg";
    if(s.find("de") != string::npos)
    {
        cout << s.find("de") << endl;
    }

    return 0;
}