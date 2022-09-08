#include<iostream>
using namespace std;

bool linear(int arr[],int n,int a){
    for(int i = 0;i<n;i++)
    {
        if(arr[i]==a)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n = 15;
    int arr[15]= {80,90,4,3,5,2,67,76,5,3,0,-5,-3,-2,-1};
    cout<<linear(arr,n,22)<<endl;
    return 0;
}