#include<cstdio>


int gcd(int a,int b){
if(b==0)return a;
else{

    return  (gcd(b,a%b));
}
}

int main(){
int a,b;
scanf("%d %d",&a,&b);
//printf("%d",a/gcd(a,b)*b);
printf("%d",gcd(a,b));
return 0;
}

