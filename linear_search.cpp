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
    for(int i=0;i<n;i++)
    {
        if(x==v[i])
        {
            ans = i+1;
            break;
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
