#include<cstdio>
#define isyear(x) x%100!=0&&x%4==0||x%400==0?1:0

int dayofmonth[13][2]={
0,0,
31,31,
28,29,
31,31,
30,30,
31,31,
30,30,
31,31,
31,31,
30,30,
31,31,
30,30,
31,31
};

struct date{
int year;
int month;
int day;
void nextday(){
day++;
if(day>dayofmonth[month][isyear(year)]){
      day=1;
      month++;
      if(month>12){
        month=1;
        year++;

      }
   }
}
};

int buf[5001][13][32];
int abs(int x){
return x<0?-x:x;
}

int main(){
date tmp;
int cnt=0;
tmp.year=0;
tmp.month=1;
tmp.day=1;
while(tmp.year!=5001){
    buf[tmp.year][tmp.month][tmp.day]=cnt;
    tmp.nextday();
    cnt++;
}
int y1,m1,d1;
int y2,m2,d2;
while(scanf("%4d%2d%2d",&y1,&m1,&d1)!=EOF){

scanf("%4d%2d%2d",&y2,&m2,&d2);
printf("%d\n",abs(buf[y1][m1][d1])-abs(buf[y2][m2][d2]));

}
return 0;
}

