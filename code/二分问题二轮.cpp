//求解算数平方根
/*
#include<cstdio>
const int eps=1e-5;
int f(int x){
return x*x;
}

int solve(int l,int r){
int left=l;
int right=r;
int mid;
while(right-left>eps){
     mid=(left+right)/2;
    if(f(mid)>2){
        right=mid;
    }
    else {
            left=mid;
    }
}
return mid;
}


int main(){

printf("%d",solve(1,2));
return 0;
}
*/

   #include<cstdio>
   #include<algorithm>
   #include<cstring>

   using namespace std;


   struct student{

     char num[100];
     char name[100];
     int age;
     char sex[10];

   }sdd[1000];

   bool cmp(student a,student b){
        if(strcmp(a.num,b.num)!=0)
            return strcmp(a.num,b.num)<0;
   }

   int main(){
   int n;
   while(scanf("%d",&n)!=EOF){
    for(int i=0;i<n;i++){
        scanf("%s%s%s%d",sdd[i].num,sdd[i].name,sdd[i].sex,&sdd[i].age);
    }
    sort(sdd,sdd+n,cmp);
    int t;
    scanf("%d",&t);
    while(t--!=0){
        char x[30];
        int ans=-1;
        scanf("%s",x);
        int right=n-1;
        int left=0;

        while(right>=left){
           int mid=(left+right)/2;
            int tmp=strcmp(sdd[mid].num,x);
            if(tmp==0){
                ans=mid;
                break;

            }
            else if(tmp>0){
                right=mid-1;
            }
            else left=mid+1;
        }
         if(ans==-1){
            printf("no answer!");

         }
           else{
         printf("%s%s%s%d",sdd[ans].num,sdd[ans].name,sdd[ans].sex,sdd[ans].age);
         }


    }
   }
   return 0;
   }
