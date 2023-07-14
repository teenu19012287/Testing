#include<iostream>
using namespace std;


void change(int n)
{
    n  = n*n;
    cout<<"value in function"<<n;

}
int main()
{
    int n;
    cout<<"enter the value:";
    cin>>n;
    change(n);
    cout<<"value in main"<<n<<endl;
    return 0;


}

