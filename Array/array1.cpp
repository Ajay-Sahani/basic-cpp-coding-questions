#include<iostream>
using namespace std;
int main()
{
    int aray[4]={1,2,8,9};
    cout<<aray[0]<<endl; 
    cout<<aray[1]<<endl;
    cout<<aray[2]<<endl;
    cout<<aray[3]<<endl;

    int aray2[6]={100,200,300,400,500};
    cout<<aray2[0]<<endl;
    cout<<aray2[1]<<endl;
    cout<<aray2[2]<<endl;
    cout<<aray2[3]<<endl;
    cout<<aray2[4]<<endl;
    aray2[5]=600;
    cout<<aray2[5]<<endl;
   
//how we can use For loop.

for(int j=0;j<6;j++)
{
    cout<<"the value of "<<j<<" is "<<aray2[j]<<endl;
}

//using while loop.
int i=0;
while(i<4)
{
    cout<<"the value of "<<i<<" is "<<aray[i]<<endl;
    i++;
}

 return 0;
}