#include<iostream>
using namespace std;

int main()
{
    int i=1,n,j=1;
    cin>>n;
    int count =1;
    while(i<=n)
    {
        count=i;
        j=1;
        while(j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}