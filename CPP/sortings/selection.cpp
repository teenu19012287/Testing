#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    int temp;
    cout<<"enter the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int  i =0 ;i<n-1;i++)
    {
    int minidx = i;
    for(int j = i+1;j<n;j++)
    {
        if(arr[j] < arr[minidx])
            minidx = j;
    }
    temp = arr[minidx];
    arr[minidx] = arr[i];
    arr[i] = temp;
    }
    cout<<"the array is:";
    for(int  i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 return 0;

        } 
