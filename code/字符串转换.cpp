#include<cstdio>
int main()
{
 int x;
 scanf("%d",&x);
 int y=0,product=1;
 while(x!=0){
    y=y+(x%10)*product;
    x=x/10;
    product*=2;
 }
 int z[40],num=0;
 do{
    z[num++]=y%10;
    y=y/10;
 }while(y!=0);
 printf("%d",z[num]);
 return 0;
}
