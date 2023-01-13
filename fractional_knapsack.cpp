#include<bits/stdc++.h>
using namespace std;

static bool comp(pair<int,int>&p1,pair<int,int>&p2 )
{
    double k1 = (double)p1.first/(double)p1.second;
    double k2 = (double)p2.first/(double)p2.second;
    return k1>k2;
}
int main()
{
   cout<<"enter capacity :"<<endl;
   int x ;
   cin>>x;
   
   cout<<"enter the size of array : "<<endl;
   int n ; cin>>n;
   
   cout<<"enter value and weight of product :"<<endl;
   vector<pair<int,int>> v;
   for(int i=0;i<n;i++)
   {
     int a,b;
     cin>>a>>b;
     v.push_back({a,b});
   }
   
   sort(v.begin(),v.end(),comp);
   double ans=0.0;
   
   for(int i=0;i<n;i++)
   {
      if(v[i].second<=x)
      {
        x-=v[i].second;
        ans+=v[i].first;
      }
      else
      {
          ans+= v[i].first * ((double)x/(double)v[i].second);
          break;
      }
   }
   cout<<"answer :"<<endl;
   cout<<ans<<endl;
}
