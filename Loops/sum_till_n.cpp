#include<iostream>
using namespace std;

int main()
{
    int sum=0,n,i=1;
    cin>>n;
    while(i<=n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout<<"Sum:"<<sum<<endl;
    return 0;
}