#include<iostream>
using namespace std;

int main()
{
    int i=1,n,j=1;
    cin>>n;
    int m=n;
    while(i<=n)
    {
        j=m;
        while(j>0)
        {
            cout<<m<<" ";
            j--;
        }
        m--;
        cout<<endl;
        i++;
    }
    return 0;
}