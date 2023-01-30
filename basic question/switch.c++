#include<iostream>
using namespace std;
int main(){
    char ch = '1';
    int num = 2;

    cout<<endl;
    switch (ch)
    {
    case '2':
        cout<<"first "<<endl;
       break;
    case 2:
        cout<<"first second "<<endl;
       break;
    case '1': cout<<"character one" <<endl;
        break;     
    default: cout<<" its a default case ";
       break;
    }

}