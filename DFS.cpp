#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>graph[12];
int vis[2001];
bool dfs(int start,int target)
{
    bool b =false;
     vis[start]=1;
     if(start==target)
     {
         return true;
     }
     for(int i=0;i<graph[start].size();i++)
     {
         if(vis[graph[start][i]]==0)
         {
             b=b | dfs(graph[start][i],target);
         }
     }
     return b;
}
int main()
{
    int n,a,b;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>a>>b;
        if(dfs(a,b))
        {
            cout<<"YES THEY ARe friends"<<endl;
        }
        else
        {
            cout<<"NO they are not friends"<<endl;
        }
        for(int i=1;i<=200;i++)
        {
            vis[i]=0;
        }
    }
    return 0;
}
