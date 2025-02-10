#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m,i;
    bool MisPrime = true;
    cin >> n >> m; 
    for(i=2;i<m;i++)
    {
        if(m%i == 0)
        {
            MisPrime = false;
        }
    }
    if(!(MisPrime))
    {
        cout << "NO" << endl;
    }else
    {
        int k = n;
        while(k++)
        {
            bool FindKisPrime = true;
            for(i=2;i<k;i++)
            {
                if(k%i == 0)
                {
                    FindKisPrime = false;
                }
            }
            if(FindKisPrime)
            {
                break;
            }
        }
        if(k == m)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}