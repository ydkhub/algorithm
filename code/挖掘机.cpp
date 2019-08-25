#include<cstdio>
const int max =50;
int main()
{
    int school[max]={0};
    int schid,score;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     scanf("%d%d",&schid,&score);
     school[schid]+=score;
    }

   int k=1;int temp=-1;
   for(int i=1;i<=n;i++){
    if(school[i]>temp){
        temp=school[i];
        k=i;
    }
   }
    printf("%d %d",k,temp);
    return 0;


}
