#include<iostream>
using namespace std;

int main()
{
    int sum_even=0,n,i=1,sum_odd=0;
    cin>>n;
    while(i<=n)
    {
        if (i%2==0)
        {
            sum_even += i;
        }
        else
        {
            sum_odd +=i;
        }
        i = i + 1;
    }
    cout<<"Sum of even numbers:"<<sum_even<<endl;
    cout<<"Sum of odd numbers:"<<sum_odd<<endl;
    return 0;
}