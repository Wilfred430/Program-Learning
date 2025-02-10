#include<iostream>
using namespace std;

int main()
{
    int a, b , c, d, i, j, tmp;

    for(i = 1; i < 4 ; i++)
    {
        a = 3*i;
        c = i;
        if((a + c)>8) //cuz 27-8=19(10+9)
        {
            for(i = 0; i < 4;i++)
            {
                d = 2*i + 1;
                for(j = 1; j < 10; j++)
                {
                    b = j;
                    if((b != (a && c))&&(d != (a && c)))
                    {
                        if((a+b+c+d) == 27)
                        {
                            tmp = 27;
                            break;
                        }
                    }
                }
                if(tmp == 27)
                {
                    break;
                }
            }
            
        }
        if(tmp == 27)
        {
            break;
        }
    }
    cout << a << b << c << d << endl;
    return 0;
}