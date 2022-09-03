#include<iostream>
using namespace std;

int main()
{
    int i=1,n,j=1;
    cin>>n;
    
    while(i<=n)
    {
        j=i;
        while(j>0)
        {
            cout<<j<<" ";
            j--;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}