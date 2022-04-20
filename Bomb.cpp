#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char A[501][501],B[501][501],C[201][201];
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);


 ll n,r,c;
 cin>>r>>c>>n;
 string s;
 for(int i=1;i<=r;i++)
 {
     string s;
     cin>>s;
     for(int j=1;j<=c;j++)
     {

         A[i][j]=s[j-1];
     }
 }
 if(n==1)
 {
     for(int i=1;i<=r;i++)
     {
         for(int j=1;j<=c;j++)
         {
             cout<<A[i][j];
         }
         cout<<endl;
     }
 }
 else if(n%2==0)
 {
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cout<<'O';
        }
        cout<<endl;
    }
 }
 else
 {
     if((n-1)%4==0)
     {
         for(int i=1;i<=r;i++)
         {
             for(int j=1;j<=c;j++)
             {
                 if(A[i][j]=='O')
                 {
                     B[i][j]='#';
                     B[i+1][j]='#';
                     B[i-1][j]='#';
                     B[i][j+1]='#';
                     B[i][j-1]='#';
                 }
             }
         }
         for(int i=1;i<=r;i++)
         {
             for(int j=1;j<=c;j++)
             {
                 if(A[i][j]=='.'&&B[i][j]!='#')
                 {
                     C[i][j]='#';
                     C[i+1][j]='#';
                     C[i-1][j]='#';
                     C[i][j+1]='#';
                     C[i][j-1]='#';
                 }
             }
         }
         for(int i=1;i<=r;i++)
         {
             for(int j=1;j<=c;j++)
             {
                 if(C[i][j]=='#')
                    cout<<'.';
                 else
                    cout<<'O';
             }
             cout<<endl;
         }
     }
     else
     {
         for(int i=1;i<=r;i++)
         {
             for(int j=1;j<=c;j++)
             {
                 if(A[i][j]=='O')
                 {
                     B[i][j]='#';
                     B[i+1][j]='#';
                     B[i][j+1]='#';
                     B[i-1][j]='#';
                     B[i][j-1]='#';
                 }
             }
         }
          for(int i=1;i<=r;i++)
         {
             for(int j=1;j<=c;j++)
             {
                 if(B[i][j]=='#')
                    cout<<'.';
                 else
                    cout<<'O';
             }
             cout<<endl;
         }
     }
 }

return 0;
}
