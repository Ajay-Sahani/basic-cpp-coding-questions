#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the digit: ";
cin>>n;
int count=0;
while (n!=0){
    if (n&1){
        count++;
    }
    n=n>>1;
}
return count;
}