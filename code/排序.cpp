#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;


struct Student{

char id[15];
int score;
int score_number;
int local_rank;

}ssd[11010];
bool cmp(Student a,Student b){
if(a.score!=b.score){
   return a.score>b.score;
}else{
return strcmp(a.id,b.id)<0;
}
}

int main(){
int num=0;//总人数
int n;//考场数
int k;//每个考场人数
scanf("%d\n",&n);
for(int i=1;i<=n;i++){
    scanf("%d",&k);
    for(int j=0;j<k;j++){
        scanf("%s %d",ssd[num].id,&ssd[num].score);
        ssd[num].score_number=i;
        num++;
    }
    sort(ssd+num-k,ssd+num,cmp);
    ssd[num-k].local_rank=1;
    for(int j=num-k+1;j<num;j++){
        if(ssd[j].score==ssd[j-1].score){
            ssd[j].local_rank=ssd[j-1].local_rank;
        }else{
        ssd[j].local_rank=j+1-(num-k);
        }
    }
}
printf("%d\n",num);
sort(ssd,ssd+num,cmp);
 int r=1;
for(int i=0;i<num;i++){

    if(i>0&&ssd[i].score!=ssd[i-1].score){
        r=i+1;
    }
    printf("%s %d %d %d\n",ssd[i].id,r,ssd[i].score_number,ssd[i].local_rank);
}
return 0;
}
