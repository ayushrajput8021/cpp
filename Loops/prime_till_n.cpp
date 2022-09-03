#include<iostream>
using namespace std;

int main()
{
    int temp=0,i=2,n,j=1;
    cin>>n;
    while(i<n)
    {
        j=1;
        while(j<i/2)
        {
            if (i%j==0){
                temp+=1;
            }
            j++;
        }

        if (temp==0)
        {
            cout<<"Prime"<<i<<" ";
        }
        temp=0;
        i++;
    }
    return 0;
}