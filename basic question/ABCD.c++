#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int i=1;
    while (i<=n){
    int j=1,count=0;
    while (j<=i){
    char ch='A'+count;
    cout<<ch<<" ";
    j=j+1;
    count=count+1;
    }
    cout<<endl;
    i=i+1;
    }
}