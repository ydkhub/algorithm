//求解阶乘
/*
#include<cstdio>
int f(int x){
if(x==0)return 1;
else{
    return f(x-1)*x;
}

}

int main(){
    int n;
     scanf("%d",&n);
    printf("%d\n",f(n));
    return 0;


}
*/
//斐波那契数列
#include<cstdio>

int f(int n){
if(n==0||n==1)return 1;
else return f(n-1)+f(n-2);
}
