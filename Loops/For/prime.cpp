#include<iostream>
using namespace std;
//goal: print 10 prime numbers
int main()
{
    int temp=0,a=1;
    for (int i = 2; a <=10;i++)
    {
        for (int j = 2; j <= i/2; j++)
        {
            if(i%j==0)
            {
                temp++;   
                
            }
    
        }
        if(temp==0)
        {
            cout<<i<<",";
            a++;
        }
        temp=0;
    }
    
    return 0;
}