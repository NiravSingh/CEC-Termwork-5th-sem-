#include<bits/stdc++.h>
using namespace std;

#define INF 10000
int main()
{
   cout<<"enter the matrix dimensions :"<<endl;
   int n ; 
   cin>>n;
   
   vector<vector<int>> mat(n, vector<int>(n,0));
   
   cout<<"enter matrix row wise :"<<endl;
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
   }
   
   for(int k=0;k<n;k++)
   {
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<n;j++)
      {
        if(mat[i][k] + mat[k][j] < mat[i][j])
        {
          mat[i][j] = mat[i][k]+ mat[k][j];
        }
      }
    }
   }
   
   cout<<"required answer :"<<endl;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        if(mat[i][j]==10000)
        {
            cout<<"INF"<<" ";
        }
        else cout<<mat[i][j]<<" ";
    }
    cout<<endl;
   }
   
   
   
}
