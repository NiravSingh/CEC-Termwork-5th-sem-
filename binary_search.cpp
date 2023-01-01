#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of the array :"<<endl;
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"enter elemnt to be searched :"<<endl;
    int x;
    cin>>x;
    int ans=-1;
    
    sort(v.begin(),v.end());
    int lo = 0, hi= n-1;
    while(lo<=hi)
    {
        int mid = (lo+hi)>>1;
        
        if(v[mid]==x)
        {
            ans=mid+1;
            break;
        }
        else if(v[mid] < x)
        {
            hi = mid-1;
        }
        else 
        {
            lo = mid+1;
        }
    }
    if(ans==-1)
    {
        cout<<"element no found."<<endl;
    }
    else
    {
        cout<<"element found at position : "<<ans<<endl;
    }
    
    return 0;
}
