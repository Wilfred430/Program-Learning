#include<iostream>
#include<climits>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1+1], R[n2+1];

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    for(int i=0;i<n1; i++)
        L[i] = arr[left + i];
    for(int j=0; j<n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 || j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
}


void merge_sort(int arr[], int left,  int right)
{
    if(left < right)
    {
        int mid = left + (right - left) / 2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1, right);
        merge(arr, left, mid, right);
    }

} 

int main() 
{
    int num;
    while (cout << "Please enter the size of sequence which you want to sort: ",cin >> num)
    {
        cout << "Please enter the sequence (divide by space): ";
        int* arr = new int[num];
        for(int i=0;i<num;i++)
        {
            cin >> arr[i];
        }

        merge_sort(arr, 0, num-1);

        cout << "After sorting: ";
        for(int i=0;i<num;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        delete [] arr;
    }

    return 0;
}
