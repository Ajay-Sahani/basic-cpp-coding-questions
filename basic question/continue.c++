#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"enter the input: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
       if (i==3){
        continue ;
    }
    cout<<i;
    }
cout<<endl;
}