#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2]; 

    for (int i = 0; i < n1; i++)    
        LeftArray[i] = a[beg + i];   

    for (int j = 0; j < n2; j++)    
        RightArray[j] = a[mid + 1 + j];    
      
    i = j = 0; 
    k = beg;
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
            a[k] = LeftArray[i++];    
        else    
            a[k] = RightArray[j++];    
        k++;    
    }    
    while (i<n1)    
        a[k++] = LeftArray[i++];    
      
    while (j<n2)    
        a[k++] = RightArray[j++];    
}    

void mergeSort(vector<int>& a, int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        mergeSort(a, beg, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, beg, mid, end);  
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
    mergeSort(v, 0, n - 1);  
     cout<<"output  array :"<<endl;
    for(auto & it : v)
    {
        cout<<it<<" ";
    }
     return 0;
}
