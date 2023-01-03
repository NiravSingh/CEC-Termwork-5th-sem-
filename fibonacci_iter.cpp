#include<bits/stdc++.h>
using namespace std;
using ll = long long ;


int main()
{
    cout<<"Enter the number :"<<endl;
    ll n;
    cin>>n;
    if(n<=1)cout<<"output : "<<n<<endl;
    else
    {
        ll prev=0,cur=1;
        
        for(ll i=2;i<=n;i++)
        {
            ll sum = cur + prev;
            prev = cur;
            cur = sum;
        }
        
        cout<<"output : "<<cur<<endl;
      }
}    
    
