#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value: ";
cin>>n;
int i=1;
while (i<=n){
    int j=1;
    while (j<=i){
     char ch='A'+3-i+j;
     cout<<ch<<" ";
     j=j+1;    
    }
 cout<<endl;
 i=i+1;
}
return 0;
}