#include<cstdio>
#include<algorithm>

using namespace std;

int gcd(int a,int b){
if(b==0)return a;
else{
    return gcd(b,a%b);
}44
}

int main(){
int n,a[50];
scanf("%d\n",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
sort(a,a+n);
int sum=0;
for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(gcd(a[i],a[i-j-1])!=1){
        sum--;
    }

        }
    sum+=i;

}
printf("%d",sum);
return 0;
}
