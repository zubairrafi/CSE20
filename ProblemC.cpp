#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=1;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==1 || m==1)
        {
            cout<<"Case "<<cnt++<<": "<<max(m,n)<<endl;
        }
        else if(m==2 || n==2)
        {
               int temp=max(n,m),extra;
               if(temp%4<=2)
                 extra=(temp%4)*2;
               else
                 extra=4;
               cout<<"Case "<<cnt++<<": "<<(temp/4)*4+extra<<endl;
        }
        else
        {
            cout<<"Case "<<cnt++<<": "<<(m*n+1)/2<<endl;
        }

    }
}
