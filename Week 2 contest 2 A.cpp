#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,k,n,sum=1,mul=2;
    cin>>t;
    while(t--)
    {
        sum=1,mul=2;
        cin>>n;
        for(int i=1;;i++)
        {
            sum+=mul;
            if(n%sum==0)
            {
                cout<<n/sum<<endl;
                break;
            }
            mul*=2;
        }
        
    }
    return 0;

}
