#include<iostream>
#include<climits>
using namespace std;

// for maximum value
int getMax(int num[], int n)
{
    int max =INT_MIN;

    for(int i=0;i<n; i++)
    {
        if(num[i]>max)
        {
            max = num[i];
        }
    }
    return max;
}
//for minimum value
int getMin(int num[], int n)
{
    int min = INT_MAX;

    for (int i=0;i<n; i++)
    {
        if(num[i]< min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout<<"enter the size: "<<endl; 
    cin>>size;

    int num[10];

    for (int i=0; i<size; i++)
    {
        cin>>num[i];
    }

    cout<<"maximum value is: "<< getMax(num, size)<<endl; 
    cout<<"minimum value is: "<< getMin(num, size)<<endl;
    return 0;
}