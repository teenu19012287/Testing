
#include<bits/stdc++.h>
using namespace std;

void print(int arr[] , int n){
    int i;
    
     for( i=0;i<n;i++);
   {
   cout<<arr[i]<<endl;
   }
}
int main() {
    // Write C++ code here
     int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(int);
  
  int i  ,cnt0 =0 , cnt2 = 0 ,cnt1 = 0 ;
  
   for(i=0;i<n;i++)
   {
       switch(arr[i])
       {
           case 0:
            cnt0++;
            break;
            case 1:
            cnt1++;
            break;
            case 2:
            cnt2++;
            break;
            
            
       }
   }
   
   i=0;
   while(cnt0 > 0){
   arr[i++] = 0;
   cnt0--;
   }
   
   while(cnt1 > 0)
   {
       arr[i++] = 1;
       cnt1--;
       
   }
   
   while(cnt2 > 0)
   {
       arr[i++] = 2;
       cnt2--;
       
   }
  
  
  print(arr, n);
   
    return 0;
}