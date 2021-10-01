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
    int arr[],n;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
     
    max_min_array(arr, n);
}
