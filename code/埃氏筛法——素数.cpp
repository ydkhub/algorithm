/*#include<cstdio>
#include<cmath>


bool isprime(int n){
if(n<=1)return false;
int sqr=(int)sqrt(1.0*n);
for(int i=2;i<sqr;i++){
    if(n%i==0)return false;
}
return true;
}


int main(){
int x;
while (scanf("%d",&x)!=EOF){


if(isprime(x)==true){
    printf("YES\n");
}else printf("NO\n");

}
return 0;
}
*/

#include<cstdio>
const int maxn=101;
int prime[maxn];
int pnum=0;
bool p[maxn]={0};

bool find_prime(int x){
for(int i=2;i<maxn;i++){
    if(p[i]==false){
        prime[pnum++]=i;
        if(prime[pnum]>=x)break;
        for(int j=i+i;j<maxn;j+=i){
            p[j]=true;
        }
    }
}
}

int main(){
int m,n;
scanf("%d %d",&m,&n);
find_prime(n);
int cot=0;
for(int i=m;i<=n;i++){
    if(prime[i]<n&&prime[i]%10==1){
         printf("%d",prime[i]);
         cot++;
         if(cot%3!=0&&i<n)printf(" ");
         else printf("\n");
    }

}
return 0;
}

