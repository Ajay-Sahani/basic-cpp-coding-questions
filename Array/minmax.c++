#include<iostream>
#include<climits>
using namespace std;

int maximum(int arr[], int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int minimum(int arr[], int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout<<"enter the size: ";
    cin>>size;

    int arr[100];

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"maximum value is: "<<maximum(arr,size)<<endl;
    cout<<"minimum value is: "<<minimum(arr,size)<<endl;
    return 0;
}