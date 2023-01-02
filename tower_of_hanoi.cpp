#include<bits/stdc++.h>
using namespace std;

void toh(int n , char from , char to, char helper)
{
    if(n==0)return ;
    toh(n-1,from,helper,to);
    cout<<" Move disk "<<n<<" from stand "<<from<<" to rod "<<to<<endl;
    toh(n-1,helper,to,from);
}
int main()
{
    cout<<"enter the number of disks : "<<endl;
    int n;
    cin>>n;
    
    toh(n,'A','B','C');
}
