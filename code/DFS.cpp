//DFS
#include<cstdio>

const int maxn=30;


int w[maxn],c[maxn],V,n,ans=0;

void DFS(int index,int sumw,int sumv){
if(index==n)return ;
DFS(index+1,sumw,sumv);
if(sumw+w[index]<=V){
    if(sumv+c[index]>ans){
        ans=sumv+c[index];
    }
    DFS(index+1,sumw+w[index],sumv+c[index]);
}
}

int main(){
scanf("%d %d",&n,&V);
for(int i=0;i<n;i++){
        scanf("%d",&w[i]);
}
for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
}
DFS(0,0,0);
printf("%d\n",ans);
return 0;
}

