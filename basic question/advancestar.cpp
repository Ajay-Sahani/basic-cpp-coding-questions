#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the input: ";
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=n-i+1)
        {
            cout<<j;
            j=j+1;
        }
        int star=i-1;
        while (star){
            cout<<"*";
            star--;
        }
        int stars=i-1;
        while (stars){
            cout<<"*";
            stars--;
        }
        int num=n-i+1;
        while (num){
            cout<<num;
            num--;
        }
        cout<<endl;
        i=i+1;
    }
}
