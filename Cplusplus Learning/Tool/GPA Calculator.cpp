#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int M,i;
    double sum = 0,deminator = 0;
    cout << "Please enter the number of subjects (credits > 0): ";
    cin >> M;
    cout << "A+ : 4.3 , A : 4.0 , A- : 3.7 , B+ : 3.3 , B : 3.0 , B- : 2.7 , C+ : 2.3 , C : 2.0 , C- : 1.7" << endl;
    cout << "The score of GPA : credits" << endl;
    double** a = new double*[M];
    for(i=0;i<M;i++)
    {
        a[i] = new double[2];
        cout << "The " << i+1 << "'s subject: ";
        cin >> a[i][0] >> a[i][1];
        sum = sum + a[i][0]*a[i][1];
        deminator = deminator + a[i][1];
    }
    cout << "Your GPA is " << sum / deminator << endl;

    return 0;
}