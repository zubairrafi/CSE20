#include<bits/stdc++.h>
using namespace std;
int A[200005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        cout<<A[min(k,n-1)]<<endl;
    }
}
