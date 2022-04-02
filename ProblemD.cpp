#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    if(b>(a+1)/2)
    {
        cout<<2*(b-(a+1)/2)<<endl;
    }
    else
    {
        cout<<2*b-1<<endl;
    }
}
