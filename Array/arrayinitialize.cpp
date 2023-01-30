#include<iostream>
using namespace std;
int main()
{
    int aray[100];
    // cout<<aray[0]<<endl;
    // cout<<aray[4]<<endl;
    // cout<<aray[6]<<endl;
    // cout<<aray[56]<<endl;
    // cout<<aray[34]<<endl;
    // cout<<aray[99]<<endl;
    fill_n(aray,100,1);
    for (int i=0;i<50;i++)
    {
        cout<<aray[i]<<endl;
    }
    return 0;
}