#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int i=0;
    int b=0;
    while(n!=0){
        int bit=n&1;
        b=bit*pow(10,i)+b;
        n=n>>1;
        i++;
    }
    cout<<b;
}