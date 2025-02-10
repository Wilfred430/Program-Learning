//without using namespace std
//we can add "std::" before statement

//example

/*
#include<iostream>

int main()
{
    int a;

    std::cin >> a;
    std::cout << a;

    return 0;
}
*/

//if / else
//if / else if
//if / else if / else

// && and
// || or
// ! not

//switch play the if / else if / else rule
//break; can't be lost, otherwise it will determine the next case
//case be allowed to layer example: case1: case2:

/*
swith(condition)     the inside condition type must interger or character
{
    case1:
        statement1;
        break;
    case2:
        statement2;
        break;
    .
    .
    .
    default:      play the same rule of else
        statement final;
        break;

}
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int a;

    while(cin >> a)
    {
        switch(a)
        {
            case 1:
                cout << 1 << endl;
                break;
        }
    }

    return 0;
}
*/

// break;    jump out the loop/switch
// continue     skip the current loop/switch

//increment  i++ there add after running one tme. ++i there run one time after add
//decrement  i-- operate like abrove but its type is minus. 
 
/*
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1,sum = 0;

    while(cin >> n)
    {
        i = 1;
        sum = 0;
        if(n == 0)
        {
            break;
        }
        while(i <= n)
        {
            sum = sum + i;
            i++;
        }
        cout << sum << endl;
    }

    return 0;
}
*/