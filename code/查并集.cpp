#include<cstdio>
const int maxn=100000001;
int father[maxn];
int isf[maxn];
void init(int n){
for(int i=0;i<n;i++){
    father[i]=i;
    isf[i]=1;
}
}
//初始化函数
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

//查找

void Union(int a,int b){
int faa=findfather(a);
int fab=findfather(b);
if(faa!=fab){
    father[faa]=fab;
    isf[fab]+=isf[faa];
}

}

//合并


int main(){
int n;
int a,b;
while(scanf("%d",&n)!=EOF){
init(maxn);
for(int i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    Union(a,b);
}

    int ans=1;
    for(int i=0;i<maxn;i++){
        if(isf[i]>ans)
            ans=isf[i];
    }
printf("%d",ans);


}
return 0;

}
