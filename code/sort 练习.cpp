
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct stduent{
 char name[3];
 int score;
 char id[2];

}ssd[10010];

bool cmp(stduent a,stduent b){
if(a.score!=b.score){
    return a.score>b.score;
}else{
    return strcmp(a.id,b.id)<0;
}
}

int main(){

int n;//学生人数
scanf("%d\n",&n);
for(int i=0;i<n;i++){
    scanf("%s %s %d\n",ssd[i].name,ssd[i].id,&ssd[i].score);

}
sort(ssd,ssd+n,cmp);
int r=1;
for(int j=0;j<n;j++){
    if(j>0&&ssd[j].score!=ssd[j-1].score){
        r=j+1;
    }
    printf("名字=%s id=%s 分数=%d 排名=%d\n",ssd[j].name,ssd[j].id,ssd[j].score,r);
}
return 0;
}
