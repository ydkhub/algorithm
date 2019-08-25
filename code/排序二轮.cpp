//Ã°ÅÝ·¨
/*
#include<cstdio>
const int maxn=30;
int main(){
int n,buf[maxn];
while(scanf("%d",&n)!=EOF){
      for(int i=0;i<n;i++){
        scanf("%d",&buf[i]);
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(buf[j]>buf[j+1]){
                int temp=buf[j];
                buf[j]=buf[j+1];
                buf[j+1]=temp;
            }
        }
      }
      for(int i=0;i<n;i++){
        printf("%d ",buf[i]);
      }
      return 0;
      }
}
*/
/*
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=10;

struct node{
    int x,y;
}fx[10];

bool cmp(node a,node b){
if(a.x!=b.x)return a.x>b.x;
else return a.y>b.y;
}

int main(){
int n;
while(scanf("%d",&n)!=EOF){
    for(int i=0;i<n;i++){
        scanf("%d %d\n",&fx[i].x,&fx[i].y);
    }
    sort(fx,fx+n,cmp);
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d %d\n",fx[i].x,fx[i].y);

    }
}
return 0;
}
*/
//¾Å¶È2.2
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

struct student{
char name[10];
int age;
int score;
}nm[100];

bool cmp(student a,student b){
if(a.score!=b.score)return a.score<b.score;
else if(strcmp(a.name,b.name)!=0){
    return strcmp(a.name,b.name)<0;
}
else{
    return a.age<b.age;
}
}
int main(){
int n;
while(scanf("%d",&n)!=EOF){
    for(int i=0;i<n;i++){
        scanf("%s %d %d\n",nm[i].name,&nm[i].age,&nm[i].score);
    }
    sort(nm,nm+n,cmp);
    for(int i=0;i<n;i++){
        printf("%s %d %d\n",nm[i].name,nm[i].age,nm[i].score);
    }
}
return 0;
}
