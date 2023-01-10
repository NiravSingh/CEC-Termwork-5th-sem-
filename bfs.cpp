#include<bits/stdc++.h>
using namespace std;

void bfs(int node,  vector<bool> &vis, vector<vector<int>> & adj,vector<int> & path )
{

   queue<int>q;
   q.push(node);
   vis[node]=true;
   
   while(!q.empty())
   {
     int k = q.front();
     q.pop();
     path.push_back(k);
     
     for(auto & it: adj[k])
     {
        if(vis[it]==false)
        {
          bfs(it,vis,adj,path);
        }
     }
   }
    
    return;
}
int main()
{
   cout<<"enter no. of nodes and no. of edges :"<<endl;
   int n,m;
   cin>>n>>m;
   
   vector<vector<int>> adj(n+1);
   vector<bool>vis(n,false);
   
   for(int i=0;i<m;i++)
   {
      int x,y;
      cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);
   }
   
   vector<int>path;
   for(int i=0;i<n;i++)
   {
      if(!vis[i])
      {
        bfs(i,vis,adj,path);
      }
   }
   
   cout<<"path :"<<endl;
   for(auto & it: path)
    cout<<it<<" ";
  
  cout<<endl;
}
