// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
       int a , b,c;
       cin>>a>>b>>c;
     unordered_set<int> m1,m2;
       while(a>0)
       {
           int r = a%10;
           m1.insert(r);
           a = a/10;
           
       }
        while(b>0)
       {
           int r = b%10;
           
           m2.insert(r);
           b = b/10;
           
       }
        while(c>0)
       {
           int r = c%10;
           
           if(m1.find(r) !=m1.end() && m2.find(r) != m2.end())
           {
           cout<< r;
           
           c = c/10;
           }
           
       }
    return 0;
}