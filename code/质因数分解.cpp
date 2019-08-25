#include<cstdio>
#include<cmath>
const int maxn=100010;
bool is_prime(int x){
if(x<=1)return false;
int sqr=(int)sqrt(1.0*x);
for(int i=2;i<=sqr;i++){
    if(x%i==0)return false;

}
return true;
}

int prime[maxn];
int pnum=0;
void find_prime(){
for(int i=1;i<maxn;i++){
    if(is_prime(i)==true){
        prime[pnum++]=i;
    }
}
}

struct factor{
int x,cnt;
}fac[10];

int main(){
find_prime();
int n,num=0;
scanf("%d",&n);
if(n==1)printf("1=1");
else{
    printf("%d=",n);
    int sqr=(int)sqrt(1.0*n);
    for(int i=0;i<pnum&&prime[i]<=sqr;i++){
        if(n%prime[i]==0){
            fac[num].x=prime[i];
            fac[num].cnt=0;
            while(n%prime[i]==0){
                fac[num].cnt++;
                n/=prime[i];
            }
            num++;
        }
        if(n==1)break;
    }
    if(n!=1){
        fac[num].x=n;
        fac[num++].cnt=1;
    }
    for(int i=0;i<num;i++){
        if(i>0)printf("*");
        printf("%d",fac[i].x);
        if(fac[i].cnt>1){
            printf("^%d",fac[i].cnt);
        }


    }
}
return 0;
}

