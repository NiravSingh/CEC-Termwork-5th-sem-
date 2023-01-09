#include <bits/stdc++.h>
using namespace std;

int partition (vector<int>& a, int start, int end)  
{  
    int pivot = a[end]; 
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        if (a[j] < pivot)  
        {  
            i++; 
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  

int partition_r(vector<int> & a, int start , int end)
{
    int k = start + rand()%(end-start);
    swap(a[k],a[end]);
    return partition(a,start,end);
}  

void quick(vector<int> & a, int start, int end) 
{  
    if (start < end)  
    {  
        int p = partition_r(a, start, end);  
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  

   
int main()  
{  
    cout<<"enter size: "<<endl;
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<n;i++)cin>>v[i];
    quick(v, 0, n - 1);  
     cout<<"output  array :"<<endl;
    for(auto & it : v)
    {
        cout<<it<<" ";
    }
     return 0;
}
