#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll A[5000001],B[5000001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k,f=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0; i<n/2; i++)
    {
        if(s[i]!=s[n-i-1])
        {
            if(s[i]>s[n-i-1])
            {
                s[n-i-1]=s[i];
                A[i]=1;
                k--;
            }
            else
            {
                s[i]=s[n-i-1];
                A[i]=1;
                k--;
            }
        }
    }
    if(k<0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]<'9')
            {
                if(A[i]==1&&k>=1)
                {
                    k--;
                    s[i]='9';
                    s[n-i-1]='9';
                }
                else if(k>=2)
                {
                    k-=2;
                    s[i]='9';
                    s[n-i-1]='9';
                }
            }
        }
        if(n%2==1)
        {
            if(k>=1)
                s[n/2]='9';
        }
        cout<<s<<endl;
    }
    return 0;
}

