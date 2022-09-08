#include<iostream>
#include<limits.h>
using namespace std;

void max(int arr[],int size){
    int maxx=INT_MIN;
    for(int i = 0;i<size;i++)
    {
        if(maxx<arr[i])
        {
            maxx=arr[i];
        }
    }
    cout<<"Maximum:"<<maxx<<endl;
}

void min(int arr[],int size){
    int minn=INT_MAX;
    for(int i = 0;i<size;i++)
    {
        if(minn>arr[i])
        {
            minn=arr[i];
        }
    }
    cout<<"Minimum:"<<minn<<endl;
}
void sum(int arr[],int size){
    int sum = 0;
    for(int i = 0;i<size;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum:"<<sum<<endl;
}
int main()
{
    int n = 10;
    int arr[15]= {80,90,4,3,5,2,67,76,5,3};
    max(arr,n);
    min(arr,n);
    sum(arr,n);
    return 0;
}