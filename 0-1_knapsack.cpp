#include<bits/stdc++.h>
using namespace std;

int f(int i ,int sum , vector<int>&val , vector<int>& w ,vector<vector<int>>&dp)
{     
    if(i<0)return 0;
     
     if(dp[i][sum]!=-1)return dp[i][sum];
     
     int pick = 0 ,notpick = 0;
     
     if(sum>=w[i])
     {
        pick = val[i] + f(i-1,sum-w[i],val,w,dp);
     }
     notpick = f(i-1,sum,val,w,dp);
     
     return dp[i][sum]=max(pick,notpick);
}
int main()
{
   cout<<"enter capacity :"<<endl;
   int x ;
   cin>>x;
   
   cout<<"enter the size of array : "<<endl;
   int n ; cin>>n;
   vector<int> val(n);
   vector<int>  w(n);
   
   cout<<"enter value of products :"<<endl;
   for(int i=0;i<n;i++)cin>>val[i];
    
   cout<<"enter weight of products :"<<endl;
   for(int i=0;i<n;i++)cin>>w[i];
    
    vector<vector<int>> dp(n+1,vector<int>(x+1,-1));

    int ans = f(n-1,x,val,w,dp);
    cout<<"answer :"<<endl;
    cout<<ans<<endl;
   
}
