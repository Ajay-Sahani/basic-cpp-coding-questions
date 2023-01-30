#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"a^b "<<(a^b)<<endl;
    cout<<"a~b "<<~a<<endl;

    cout<< (17>>1) <<endl;
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;
    cout<< (21<<2) <<endl;

    int i=3;
    
    cout<<(i++)<<endl;
    //i=3,i=4
    cout<<(++i)<<endl;
    //i=5
    cout<<(i--)<<endl;
    //i=5,i=4
    cout<<(--i)<<endl;
    //i=3


} 