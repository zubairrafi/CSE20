#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int d=n/2;
        if(d%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=1;i<=d;i++)
            {
                cout<<2*i<<" ";
            }
            for(int i=1;i<=d;i++)
            {
               
                if(i==d)
                {
                    cout<<2*i-1+d<<endl;
                }
                else
                {
                   cout<<2*i-1<<" ";
                }
            }
        }
        
    }
    return 0;

}
