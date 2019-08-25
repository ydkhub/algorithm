//此程序用来求解月饼销售问题
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;


struct mooncake{

double store;
double sell;
double price;
}cake[1010];

bool cmp(mooncake a,mooncake b){
 if(a.price!=b.price){
    return a.price>b.price;
 }
}

int main(){
int n;//kind
double D;//require
scanf("%d %lf",&n,&D);
for(int i=0;i<=n;i++){
    scanf("%1f",&cake[i].store);

}

for(int i=0;i<=n;i++){
    scanf("%1f",&cake[i].sell);
    cake[i].price=cake[i].sell/cake[i].store;
}
sort(cake,cake+n,cmp);
double ans=0;
for(int i=0;i<n;i++){
    if(cake[i].store<D){
        D-=cake[i].store;
        ans+=cake[i].store*cake[i].price;
    }else{
    ans+=cake[i].price*D;
    break;
    }
}
printf("%.2f\n",ans);
return 0;
}
