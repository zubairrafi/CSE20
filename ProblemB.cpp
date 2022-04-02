#include<bits/stdc++.h>
using namespace std;
int main()
{
  

        int t,cnt=1;
        cin>>t;
        while(t--)
        {
            long long int n,a,row,col;
            cin>>n;
            a=sqrt(n);
            if(a*a!=n)
            {
                a++;
            }
            if(a%2==0)
            {
                 row=min(a,(a*a-n+1));
                 col=min(a,n-(a-1)*(a-1));
            }
            else
            {
                if(a*a-a-n+1<=0){
                  row=a,col=a*a-n+1;
                }
                else
                  row=n-(a-1)*(a-1),col=a;
                
            }
            cout<<"Case "<<cnt++<<": "<<col<<" "<<row<<endl;
        }
        return 0;

}
