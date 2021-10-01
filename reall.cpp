#include<iostream>
#include<stdlib.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    int mid = (end+1)/2;
    for(int i = start; i<mid; i++)
    {
        int temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, 0, n-1);
    printArray(arr, n);
}
