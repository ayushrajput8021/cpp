#include<iostream>
using namespace std;

int main()
{
    int row=1,n,col=1;
    cin>>n;
    while(row<=n)
    {
        int space = n - row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        col=1;
        while(col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}