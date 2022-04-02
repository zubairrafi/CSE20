#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t--)
  {

     int n;
     cin>>n;
     cout<<min(n,10)<<" "<<n-min(n,10)<<endl;
  }

  return 0 ;
}
