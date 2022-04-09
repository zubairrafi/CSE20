#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll A[5000001];
int main()
{
  ll t;
 cin>>t;
 while(t--)
 {
    ll n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(A[i]>0)
        {
            ll ma=-1;
            while(A[i]>0&&i<=n)
            {
                ma=max(A[i],ma);
                i++;
            }
            ans+=ma;
            i--;
        }
        else
        {
            ll ma=-999999999999;
           while(A[i]<0&&i<=n)
           {
               ma=max(A[i],ma);
               i++;
           }
           ans+=ma;
           i--;
        }
    }
    cout<<ans<<endl;

 }
  return 0;
}
