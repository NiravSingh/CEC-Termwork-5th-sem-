
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  
  cout<<"enter size :"<<endl;
  cin>>n;
  vector<int>v(n),l;
  map<int,int>mpp;
  cout<<"enter the elements :"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>v[i];mpp[v[i]]++;
    
  }
  for(auto & it: mpp)
  {
     int k = it.second;
     for(int i=0;i<k;i++)
     {
      l.push_back(it.first);
     }
  }
  cout<<"output array :"<<endl;
  for(auto & it:l)
  {
    cout<<it<<" ";
  }
  cout<<endl;
}
