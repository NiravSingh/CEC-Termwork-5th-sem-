#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

ll fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2) ;
    }
}
int main()
{
    cout<<"Enter the number :"<<endl;
    ll n;
    cin>>n;
    cout<<"output : "<<fib(n)<<endl;
}
