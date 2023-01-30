#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number to find it's binary ";
    cin>>n;
    if (n<0){
        n=n*(-1);
        cout<<" your number is "<<n<<endl;
    } 
    int i=0;
    int ans=0;
    int onescompans=0;
    while (n!=0){
        int bit=n&1;
        cout<<"rightmost bit is "<<bit<<endl;
        ans=bit*pow(10,i)+ans;
        int testbit=bit;
        if (testbit==1)
        {
            testbit=0;
        }
        else{
            testbit=1;
        }
    }
        cout<<"onescompbit is "<<testbit<<endl;
        onescompans=(testbit*pow(10,i))+onescompans;
        int twoscomp=onescompans|1;
        cout<<"twoscompanswer is "<<twoscomp<<" <----ANSWER"<<endl;
        cout<<"therefore,the number will be stored in this form "<<twoscomp<<"except the 0s before it or not printed."<<endl;
    
}