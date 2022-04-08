#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    cout<<min(n%k,k-n%k)<<endl;

}
