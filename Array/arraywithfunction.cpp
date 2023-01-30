#include <iostream>
using namespace std;
void printarray(int arr[],int size)
{
    cout<<"printing thr array..."<<endl; 
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<" program executed!!! "<< endl;
}
int main()
{ 
    int ajay[10]={1,2,3,4,5,6,7,8,9,10};
    printarray(ajay, 10);
    cout<<endl;

    int vijay[5]={1,23,34,5325,2};
    printarray(vijay,5);

    int size = sizeof(ajay)/sizeof(int);
    cout<<" size of ajay is "<< size <<endl;
}