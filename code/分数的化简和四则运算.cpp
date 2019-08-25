#include<cstdio>
#include<cmath>
using namespace std;
int gcd(int a,int b){
if(b==0)return a;
else return gcd(b,a%b);

}

struct fraction{
int up,down;
}act;

fraction reduction(fraction result){
if(result.down<0){
    result.up=-result.up;
    result.down=-result.down;
}
  if(result.up==0){
    result.down=1;
  }else{
   int d=gcd(abs(result.up),abs(result.down));
  result.up/=d;
  result.down/=d;

  }
return result;
}

int main(){
int m;
scanf("%d",&m);
m=fraction(act);
printf("%d/%d",act.up,act.down);
return 0;



}
