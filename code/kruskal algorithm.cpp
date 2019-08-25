#include<cstdio>
#include<algorithm>

using namespace std;

const int maxn=100;
//const int inf=10010;

struct edge{
int u,v;//每个边的两个顶点
int cost;//边权
}E[maxn];

bool cmp(edge a,edge b){
return a.cost<b.cost;
}

int father[maxn];//查并集
int findfather(int x){
int a=x;
while(x!=father[x]){
    x=father[x];
}

while(a!=father[a]){
    int z=a;
    a=father[a];
    father[z]=x;
    }
return x;
}


int kruskal(int n,int m){
int ans=0;int num_edge=0;
for(int i=0;i<n;i++){
    father[i]=i;
}
sort(E,E+m,cmp);
for(int i=0;i<m;i++){
   int fau=findfather(E[i].u);
   int fav=findfather(E[i].v);
   if(fau!=fav){
    father[fau]=fav;
    ans+=E[i].cost;
    num_edge++;
    if(num_edge==n-1)break;

   }
}

if(num_edge!=n-1)return -1;
else return ans;
}


int main(){
int n,m;
while(scanf("%d%d",&n,&m)!=EOF){;
for(int i=0;i<m;i++){
    scanf("%d%d%d",&E[i].u,&E[i].v,&E[i].cost);

}

printf("%d",kruskal(n,m));
}
return 0;
}
