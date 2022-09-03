#include<iostream>
using namespace std;

int main()
{
    int i=1,n,j=1;
    cin>>n;
    int count =1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<count<<" ";
            j++;
            count++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}