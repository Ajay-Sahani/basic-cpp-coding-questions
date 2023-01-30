#include<iostream>
using namespace std;
int main(){
    char ch='1';
    switch (ch)
    {
    case '1': cout<<"character"<<endl;
        break;
    case 1: cout<<"char"<<endl;
        break;
    default:cout<<"this is exception: ";
        break;
    }
    cout<<endl;
    return 0;
}