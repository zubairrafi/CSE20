#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0,A[201];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        sum=sum+A[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(A[i]*4*m>=sum)
        {
            ans++;
        }
    }
    if(ans>=m)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
