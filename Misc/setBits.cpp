#include<iostream>
using namespace std;

int main()
{
    int a=6,b=5;
    int count = 0;
    while(a!=0)
    {
        if ((a&1)==1)
        {
            count++;
        }
        a=a>>1;
    }
    while(b!=0)
    {
        if ((b&1)==1)
        {
            count++;
        }
        b=b>>1;
    }
    cout<<"Set Bits: "<<count<<endl;
    return 0;
}