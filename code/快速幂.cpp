//快速幂的递归写法
#include<cstdio>

typedef long long LL;

LL solve(LL a,LL b,LL m){
if(b==0)return 1;
if(b%2==1){
    return a*solve(a,b-1,m)%m;
}else{
    LL num=solve(a,b/2,m);
    return num*num%m;
}


}

int main(){
    LL m,n,d;
   scanf("%lld %lld %lld",&m,&n,&d);
   printf("%lld",solve(m,n,d));
   return 0;
}
