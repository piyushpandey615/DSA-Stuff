
#include<bits/stdc++.h>
using namespace std;

vector<int>arr[10001];
int vis[10001];
int dis[10001];

void bfs(int source)
{

     queue<int>q;
     q.push(source);
     vis[source]=1;
     dis[source]=0;

     while(!q.empty())
     {
          int curr = q.front();
          q.pop();
          for(int child: arr[curr])
          {
              if(!vis[child])
              {
                  q.push(child);
                  vis[child] =1;
                  dis[child] = dis[curr]+1;
              }
          }

      
     }
}



int main()
{

   int t;
   cin>>t;
   while(t--)
   {

       int n,m,a,b;
       cin>>n>>m;


       for(int i=1; i<=n; i++)
       {
           arr[i].clear();
           vis[i]=0;
       }
    

    for(int i=1; i<=m; i++)
    {
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
      
       bfs(1);
       cout<<dis[n]<<endl;

   }
 

}
