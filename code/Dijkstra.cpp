#include<cstdio>
#include<algorithm>

using namespace std;

const int maxn=1000;//最大定点数
const int inf=100000000;

int n,m,s,G[maxn][maxn];//邻接矩阵
int d[maxn];
int c[maxn];//最少花费
int pre[maxn];
bool vis[maxn]={false};
int cost[maxn][maxn];//边权的增加

void Dijkstra(int x){
fill(d,d+maxn,inf);
for(int i=0;i<n;i++){
    pre[i]=i;//每个的初始前驱结点为1；
}
d[s]=0;c[s]=0;
for(int i=0;i<n;i++){
    int u=-1;
    int MIN=inf;
    for(int j=0;j<n;j++){
        if(vis[j]==false&&d[j]<MIN){
            u=j;
            MIN=d[j];

        }
    }
    if(u==-1)return;
    vis[u]=true;
    //不加边权
   /* for(int v=0;v<n;v++){
        if(vis[v]==false&&G[u][v]!=inf&&d[u]+G[u][v]<d[v]){
            d[v]=d[u]+G[u][v];
            pre[v]=u;
        }
    }*/
    //加边权
    for(int v=0;v<n;v++){
        if(vis[v]==false&&G[u][v]!=inf){
            if(d[u]+G[u][v]<d[v]){
                d[v]=d[u]+G[u][v];
                c[v]=c[u]+cost[u][v];
            }else if(d[u]+G[u][v]==d[v]&&c[u]+cost[u][v]<c[v]){
                c[v]=c[u]+cost[u][v];
            }
        }
    }


}

}

void DFS(int s,int v){
if(v==s){
    printf("%d\n",s);
    return;
}else{
DFS(s,pre[v]);
printf("%d",v);
}

}


int main(){
int u,v,w,z;

scanf("%d%d%d",&n,&m,&s);
fill(G[0],G[0]+maxn*maxn,inf);//初始化图;
for(int i=0;i<m;i++){
    scanf("%d%d%d%d",&u,&v,&w,&z);
    G[u][v]=w;
    cost[u][v]=z;
}


Dijkstra(s);
DFS(0,3);
printf("\n");
for(int i=0;i<n;i++){
printf("%d",d[i]);
}

return 0;
}
