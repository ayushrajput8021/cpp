#include<iostream>
using namespace std;

int main()
{   int n= 9;
    int arr[25]= {1,2,3,4,5,6,7,8,9};
    cout<<"Original array: ";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<n;i+=2)
    {
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<"Reverse array: ";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}