#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
ll fact(ll n)
{
    if(n<=1LL)return 1LL;
    return n*fact(n-1);
    
}
int main()
{
    cout<<"Enter the number :"<<endl;
    ll n;
    cin>>n;
    if(n>20)cout<<"number too large"<<endl;
    else cout<<"factorial is : "<< fact(n)<<endl;
    
}
