#include<iostream>
using namespace std;
int power(){
    int a,b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
int ans=1;
for (int i=1;i<=b;i++){
    ans=ans*a;
}
return ans;

}
int main(){
    // int a,b;
    // cout<<"enter the value of a: ";
    // cin>>a;
    // cout<<"enter the value of b: ";
    // cin>>b;
    // int answer=power(a,b);
    int ans=power();
    cout<<"answer is: "<<ans<<endl;
    int ans1=power();
    cout<<"answer is: "<<ans1<<endl;
    int ans2=power();
    cout<<"answer is: "<<ans2<<endl;

    return 0;
}