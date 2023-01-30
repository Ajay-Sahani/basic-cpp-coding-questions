#include<iostream>
int main()
{
    int space ,rows;
    std::cout<<"enter number of rows: ";
    std::cin>>rows;

    for(int i=1, k=0; i<=rows; ++i,k=0)
    {
        for(space=1;space<=rows-i; ++space)
        {
            std::cout<<" ";
        }
        while(k !=2*i-1)
        {
            std::cout<< "* ";
            ++k;
        }
        std::cout<<endl;
    }
    return 0;
}