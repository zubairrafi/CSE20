#include<bits/stdc++.h>
using namespace std;
int ans=1,vis[20001],level[20001];
vector<int>v[20001];
vector<int>p;
void bfs()
{
    queue<int>q;
    for(int i=0;i<p.size();i++)
    {
       vis[p[i]]=1;
       q.push(p[i]);
       level[p[i]]=1;
    }
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<v[u].size();i++)
        {
            int t=v[u][i];
            if(vis[t]==0)
            {
                vis[t]=1;
                level[t]=level[u]+1;
                q.push(t);
            }
        }
    }
}
int main()
{
   int n,a;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      cin>>a;
      if(a!=-1)
      {
          v[a].push_back(i);
          v[i].push_back(a);
      }
      else
      {
          p.push_back(i);
      }
   }
   bfs();
   for(int i=1;i<=n;i++)
   {
       ans=max(ans,level[i]);
   }
   cout<<ans<<endl;
  return 0 ;
}
