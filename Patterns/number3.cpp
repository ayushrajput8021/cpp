#include<iostream>
using namespace std;

int main()
{
    int i=1,n,j=1;
    cin>>n;
    while(i<=n)
    {
        j=n;
        while(j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}