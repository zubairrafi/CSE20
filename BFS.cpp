#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>graph[12];
int vis[2001];
void bfs(int start)
{
    queue<int>q;
    q.push(start);
    vis[start]=1;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0;i<graph[x].size();i++)
        {
            if(vis[graph[x][i]]==0)
            {
                vis[graph[x][i]]=1;
                q.push(graph[x][i]);
            }
        }
    }
    return ;
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
        bfs(a);
        if(vis[b]==1)
        {
            cout<<"YES they are friends"<<endl;
        }
        else
        {
            cout<<"NO They are not friends"<<endl;
        }
        for(int i=0;i<=12;i++)
        {
            vis[i]=0;
        }

    }
    return 0;
}
