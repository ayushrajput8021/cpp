#include<iostream>
using namespace std;

int main()
{
    int i=1,n,j=1;
    cin>>n;
    while(i<=n)
    {
        int j =1;
        while(j<=i)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}