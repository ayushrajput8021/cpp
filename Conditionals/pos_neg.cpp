#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number:"<<endl;
    cin>>a;
    if (a > 0)
    {
        cout<<"Number is positive"<<endl;
    }
    else if (a==0)
    {
        cout<<"Number is Zero"<<endl;
    }
    else
        cout<<"Number is negative"<<endl;
}