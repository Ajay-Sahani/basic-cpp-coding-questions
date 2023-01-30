#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the amount: ";
    cin>>n;
    int a,b,c,d;
    switch (1)
    {
        case 1: a=n/100;
        n=n%100;
        cout<<"no. of 100 ruppe= "<<a<<endl;
        
        case 2: b=n/50;
        n=n%50;
        cout<<"no. of 50 ruppe= "<<b<<endl;

        case 3: c=n/20;
        n=n%20;
        cout<<"no. of 20 ruppe= "<<c<<endl;

        case 4: d=n/1;
        n=n%1;
        cout<<"no. of 1 ruppe= "<<d<<endl;
        break;
        default: cout<<"invalid";
        break;
    }
    return 0;
}