#include <bits/stdc++.h>
using namespace std;

int main()
{
  cout<<"Enter size of array :"<<endl ;
  int n;
  cin>>n ;
  
  vector<int> v(n);
  
  cout<<"enter array elements :"<<endl;
  for(int i=0;i<n;i++ )
  {
    cin>>v[i];
  }
  
  bool flag;
  for(int i=0;i<n;i++)
  {
    flag = false;
    for(int j=0;j<n-1-i;j++)
    {
       if(v[j]>v[j+1])
        {
          swap(v[j],v[j+1]);
          flag=true;
        }
    }
   // cout<<"flag : "<<flag<<endl;
    
    if(!flag)break;
  }
  
  
  cout<<"sorted array :"<<endl;
  for(auto & it: v)cout<<it<<" ";
    cout<<endl;
}
