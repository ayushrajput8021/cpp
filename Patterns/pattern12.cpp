#include<iostream>
using namespace std;

int main()
{
    int row=1,n,col=1;
    cin>>n;
    char ch = 65+n-1;
    while(row<=n)
    {
        col=1;
        while(col<=row)
        {
            cout<<ch<<" ";
            col++;
            ch++;
        }
        ch=ch-row-1;
        row++;
        cout<<endl;
        
    }
    return 0;
}