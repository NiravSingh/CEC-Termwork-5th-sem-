#include<bits/stdc++.h>
using namespace std;

static bool comp(pair<int,int>&p1 , pair<int,int>&p2)
{
     return p1.second<p2.second;
}
int main()
{
    cout<<"enter the no. of activities :"<<endl;
    int n;
    cin>>n;
    
    vector<int>start(n),finish(n);
      cout<<"ente start time :"<<endl;
      for(int i=0;i<n;i++)
      {  
       cin>>start[i];
      }
      cout<<"ente finish time :"<<endl;
      for(int i=0;i<n;i++)
      {
       cin>>finish[i];
      }  
      
      vector<pair<int,int>> v;
      for(int i=0;i<n;i++)
      {
        v.push_back({start[i],finish[i]});
      }
      
      sort(v.begin(),v.end(),comp);
      int h=0;
      cout<<"selected activities :"<<endl;
      cout<<v[h].first<<" "<<v[h].second<<endl;
      for(int i=1;i<n;i++)
      {
        if(v[i].first >= v[h].second)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
            h=i;
        }
      }
      
      cout<<endl;
}
