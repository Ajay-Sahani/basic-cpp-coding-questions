#include<iostream>
using namespace std;
int power (int a,int b){
     cout<<a<<endl;
    int ans=1;
    for (int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    int answer=power(a,b);
    cout<<"answer is "<<answer<<endl;  
}