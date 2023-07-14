// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
   // std::cout << "Hello world!";
   
  int n;
  int arr[n];
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  int x;
  cout<<"element to be searchesd ";
  cin>>x;
  
 for(int i =0 ;i<=n;i++)
 {
     if(arr[i] == x)
     
         cout<<i<<endl;
         
     
     else
     cout<<"element not found:";
 }

   
    return 0;
}