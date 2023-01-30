#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,result;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b : ";
    cin>>b;
    cout<<"enter the value of c : ";  
    cin>>c;
    cout<<"enter the value of d : ";
    cin>>d;
    result=((a<b) || (c<d));
    cout<<result;
}
