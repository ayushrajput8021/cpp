#include<iostream>
using namespace std;

int main()
{
    int row=1,n,col=1;
    cin>>n;
    char ch = 65,chh=65;
    while(row<=n)
    {
        col=1;
        while(col<=n)
        {
            cout<<ch<<" ";
            ch++;
            col++;
        }
        ch=chh+row;
        row++;
        cout<<endl;
        
    }
    return 0;
}