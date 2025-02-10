#include<iostream>
using namespace std;

void Win_Det(char dot[][7])
{
    int count=0,i,j;
    for(i=0;i<4;i++)
    {
        if(dot[][] != dot[-i][-i])
        {
            break;
        }else if(x-i == 0 || y-i == 0 )
        {
            count++;
            break;
        }else if(dot[][] == dot[-i][-i])
        {
            count++;
        }
    }
    if(count == 4)
    {
        cout << "Player" << X << "win!" << endl;
    }else
    {
        count = 0;
    }
    for(i=0;i<4;i++)
    {
        if(dot[][] != dot[+i][+i])
        {
            break;
        }else if(x+i == 7 || y+i == 6 )
        {
            count++;
            break;
        }else if(dot[][] == dot[+i][+i])
        {
            count++;
        }
    }
    if(count == 4)
    {
        cout << "Player" << X << "win!" << endl;
    }else
    {
        count = 0;
    }
    for(i=0;i<4;i++)
    {
        if(dot[][] != dot[+i][-i])
        {
            break;
        }else if(x-i == 0 || y+i == 6 )
        {
            count++;
            break;
        }else if(dot[][] == dot[+i][-i])
        {
            count++;
        }
    }
    if(count == 4)
    {
        cout << "Player" << X << "win!" << endl;
    }else
    {
        count = 0;
    }
    for(i=0;i<4;i++)
    {
        if(dot[][] != dot[-i][+i])
        {
            break;
        }else if(x+i == 7 || y-i == 0 )
        {
            count++;
            break;
        }else if(dot[][] == dot[-i][+i])
        {
            count++;
        }
    }
    if(count == 4)
    {
        cout << "Player" << X << "win!" << endl;
    }else
    {
        count = 0;
    }
    for(i=0;i<4;i++)
    {
        if(dot[][] != dot[][+i])
        {
            break;
        }else if(x+i == 7)
        {
            count++;
            break;
        }else if(dot[][] == dot[][+i])
        {
            count++;
        }
    }
    if(count == 4)
    {
        cout << "Player" << X << "win!" << endl;
    }else
    {
        count = 0;
    }
    for(i=0;i<4;i++)
    {
        if(dot[][] != dot[][-i])
        {
            break;
        }else if(x-i == 0)
        {
            count++;
            break;
        }else if(dot[][] == dot[][-i])
        {
            count++;
        }
    }
    if(count == 4)
    {
        cout << "Player" << X << "win!" << endl;
    }else
    {
        count = 0;
    }
    for(i=0;i<4;i++)
    {
        if(dot[][] != dot[+i][])
        {
            break;
        }else if(y+i == 6 )
        {
            count++;
            break;
        }else if(dot[][] == dot[+i][])
        {
            count++;
        }
    }
    if(count == 4)
    {
        cout << "Player" << X << "win!" << endl;
    }else
    {
        count = 0;
    }
    for(i=0;i<4;i++)
    {
        if(dot[][] != dot[-i][])
        {
            break;
        }else if(y-i == 0)
        {
            count++;
            break;
        }else if(dot[][] == dot[-i][])
        {
            count++;
        }
    }
    if(count == 4)
    {
        cout << "Player" << X << "win!" << endl;
    }else
    {
        count = 0;
    }
}