#include<iostream>
using namespace std;

int main()
{
    int n = 9,temp=0;
    int start=0,end=n-1;
    int arr[15]= {80,90,4,3,5,2,67,76,5};
    cout<<"Original array: ";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reverse array: ";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}