#include<bits/stdc++.h>
using namespace std;
int vis[20001],ans=1,cnt=0;
vector<int>v[20001];
vector<int>p;
void dfs(int start)
{

    vis[start]=1;
    cnt++;
    ans=max(ans,cnt);
    for(int i=0; i<v[start].size(); i++)
    {
        int t=v[start][i];
        if(vis[t]==0)
        {
            dfs(t);
        }
    }
    cnt--;
    return ;
}
int main()
{
    int n,a;
    cin>>n;
    for(int i=1; i<=n; i++)
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
    for(int i=0;i<p.size();i++)
    {
        dfs(p[i]);
    }
    cout<<ans<<endl;
    return 0;
}
