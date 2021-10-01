#include<iostream>
#include<stdlib.h>
using namespace std;

void max_min_array(int arr[], int size)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i<size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    cout<<"MAX: "<<max<<endl;
    cout<<"MIN: "<<min<<endl;
}

int main()
{
    int arr[] = { 1000, 11, 445, 1, 330, 3000 };
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    max_min_array(arr, arr_size);
}
