#include<iostream>
using namespace std;

int main()
{
    int num[1000], N, i, j, tmp;

    while(cin >> N)
    {
        for(i = 0; i < N; i++)
        {
            cin >> num[i];
        }

        for(i = 0; i < N; i++)
        {
            for(j = i + 1; j < N; j++)
            {
                if(num[i] > num[j])
                {
                    tmp = num[i];
                    num[i] = num[j];
                    num[j] = tmp;
                }
            }
        }

        for(i = 0; i < N ; i++)
        {
            cout << num[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    
}

