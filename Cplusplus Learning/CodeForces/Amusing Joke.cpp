#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string a,b,c;
    int k[26] = {0},q[26] = {0};
    cin >> a >> b >> c;
    //A B C D E 6 F G H I J 11 K L M N O 16 P Q R S T  21 U V W X Y Z
    for(int i=0;i<a.length();i++)
    {
        switch (a[i])
        {
            case 'A':
                k[0]++;
            case 'B':
                k[1]++;
            case 'C':
                k[2]++;
            case 'D':
                k[3]++;
            case 'E':
                k[4]++;
            case 'F':
                k[5]++;
            case 'G':
                k[6]++;
            case 'H':
                k[7]++;
            case 'I':
                k[8]++;
            case 'J':
                k[9]++;
            case 'K':
                k[10]++;
            case 'L':
                k[11]++;
            case 'M':
                k[12]++;
            case 'N':
                k[13]++;
            case 'O':
                k[14]++;
            case 'P':
                k[15]++;
            case 'Q':
                k[16]++;
            case 'R':
                k[17]++;
            case 'S':
                k[18]++;
            case 'T':
                k[19]++;
            case 'U':
                k[20]++;
            case 'V':
                k[21]++;
            case 'W':
                k[22]++;
            case 'X':
                k[23]++;
            case 'Y':
                k[24]++;
            case 'Z':
                k[25]++;
        }
    } 
    for(int i=0;i<b.length();i++)
    {
        switch (b[i])
        {
            case 'A':
                k[0]++;
            case 'B':
                k[1]++;
            case 'C':
                k[2]++;
            case 'D':
                k[3]++;
            case 'E':
                k[4]++;
            case 'F':
                k[5]++;
            case 'G':
                k[6]++;
            case 'H':
                k[7]++;
            case 'I':
                k[8]++;
            case 'J':
                k[9]++;
            case 'K':
                k[10]++;
            case 'L':
                k[11]++;
            case 'M':
                k[12]++;
            case 'N':
                k[13]++;
            case 'O':
                k[14]++;
            case 'P':
                k[15]++;
            case 'Q':
                k[16]++;
            case 'R':
                k[17]++;
            case 'S':
                k[18]++;
            case 'T':
                k[19]++;
            case 'U':
                k[20]++;
            case 'V':
                k[21]++;
            case 'W':
                k[22]++;
            case 'X':
                k[23]++;
            case 'Y':
                k[24]++;
            case 'Z':
                k[25]++;
        }
    } 
    for(int i=0;i<c.length();i++)
    {
        switch (c[i])
        {
            case 'A':
                q[0]++;
            case 'B':
                q[1]++;
            case 'C':
                q[2]++;
            case 'D':
                q[3]++;
            case 'E':
                q[4]++;
            case 'F':
                q[5]++;
            case 'G':
                q[6]++;
            case 'H':
                q[7]++;
            case 'I':
                q[8]++;
            case 'J':
                q[9]++;
            case 'K':
                q[10]++;
            case 'L':
                q[11]++;
            case 'M':
                q[12]++;
            case 'N':
                q[13]++;
            case 'O':
                q[14]++;
            case 'P':
                q[15]++;
            case 'Q':
                q[16]++;
            case 'R':
                q[17]++;
            case 'S':
                q[18]++;
            case 'T':
                q[19]++;
            case 'U':
                q[20]++;
            case 'V':
                q[21]++;
            case 'W':
                q[22]++;
            case 'X':
                q[23]++;
            case 'Y':
                q[24]++;
            case 'Z':
                q[25]++;
        }
    } 
    bool Common = true;
    for(int i=0;i<26;i++)
    {
        if(k[i] != q[i])
        {
            Common = false;
        }
    }
    if(Common)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }

    return 0;
}