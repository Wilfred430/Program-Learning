#include<iostream>
using namespace std;

int main()
{
    int N, i;
    double AX, AY, x[100], y[100], Sxx = 0, Sxy = 0;
 
    cout << "Enter the number of data point: ";
    cin >> N;
    cout << "Enter the mean of x: ";
    cin >> AX;
    cout << "Enter the mean of y: ";
    cin >> AY;
    for(i = 1; i <= N;i++)
    {
        cout << "Enter data point " << i << " (x y): ";
        cin >> x[i] >> y[i];
        Sxx = Sxx + (x[i] - AX)*(x[i] - AX);
        Sxy = Sxy + (x[i] - AX)*(y[i] - AY);
    }
    cout << "The linear regression line is: y = " << AY - (Sxy / Sxx) * AX << " + " << (Sxy / Sxx) << "x" << endl;
    while(1)
    {
        cout << "Enter the value of x to predict (Press -1 to exit): ";
        cin >> N;
        if (N == -1)
        {
            break;
        }
        cout << "The predicted value of y for x = " << N << " is: " << AY - (Sxy / Sxx) * AX + (Sxy / Sxx)*N << endl;
    }
    return 0;
}