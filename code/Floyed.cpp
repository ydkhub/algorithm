#include<cstdio>
#include<algorithm>

using namespace std;

const int maxn=200;
const int inf=100000000;
int n,m;
int dis[maxn][maxn];
void Floyd(){
for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if(dis[i][k]!=inf&&dis[k][j]!=inf&&dis[i][k]+dis[k][j]<dis[i][j]){
                dis[i][j]=dis[i][k]+dis[k][j];
            }
         }
    }
}

}


int main(){
while(scanf("%d%d",&n,&m)!=EOF){
        if(n==0&&m==0)break;
fill(dis[0],dis[0]+maxn*maxn,inf);
for(int i=0;i<n;i++){
    dis[i][i]=0;
}
int u,v;
for(int i=0;i<m;i++){
    scanf("%d%d",&u,&v);
    scanf("%d",&dis[u][v]);
    dis[v][u]=dis[u][v];
}
Floyd();
printf("%d\n",dis[1][n]);
}
return 0;
}
