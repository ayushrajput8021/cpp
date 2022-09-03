#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character:"<<endl;
    cin>>ch;
    cout<<ch<<endl;
    if ((ch >= 48) && (ch <= 57))
    {
        cout<<"Character is numeric !!"<<endl;
    }
    else if ((ch >= 65) && (ch <= 90))
    {
        cout<<"Character is Upper Case !!"<<endl;

    }
    else if ((ch >=97) && (ch <= 122))
    {
        cout<<"Character is lower Case !!"<<endl;
    }
    else
        cout<<"Character is Unknown" <<endl;
}