#include<cstdio>
int n,V,maxvalue=0;
int w[50];
int c[50];
void dfs(int index,int sumw,int sumv){
if(index==n){
    return ;
}
dfs(index+1,sumw,sumv);
if(sumw+w[index]<=V){
    if(sumv+c[index]>maxvalue)
    {

        maxvalue=sumv+c[index];

    }

dfs(index+1,sumw+w[index],sumv+c[index]);
}

}

int main(){
scanf("%d%d",&n,&V);
for(int i=0;i<n;i++){
    scanf("%d",&w[i]);
}
for(int i=0;i<n;i++){
    scanf("%d",&c[i]);
}
dfs(0,0,0);
printf("%d",maxvalue);
return 0;

}
