//找x
/*
#include<cstdio>

int main(){
int n,m;
int a[10];
while(scanf("%d\n",&n)!=EOF){;
for(int i=0;i<n;i++){
   scanf("%d",&a[i]);
}
scanf("%d",&m);
for(int j=0;j<n;j++){
    if(m==a[j]){
        printf("%d",j);
        break;

    }
    if(j==n-1){
        printf("-1");
    }
}
}
return 0;
}
*/
//二分查找无重复元素
/*
#include<cstdio>
#include<algorithm>

using namespace std;

int binarysearch(int a[],int left,int right,int x){
int mid=left+(right-left)/2;
while(left<right){
    if(a[mid]==x)return mid;
 else{
    if(a[mid]>x)right=mid-1;
       else left=mid+1;
 }
}
return -1;
}



int main(){
int n;
int a[5];
scanf("%d\n",&n);
for(int i=0;i<n;i++){
   scanf("%d",&a[i]);
}
//sort(a,a+n);

printf("%d",binarysearch(a,0,n-1,5));


return 0;
}
*/
//查找第一个大于等于x的数的位置；
#include<cstdio>

int binarysearch(int a[],int left,int right,int x){

while(left<right){
 int mid=left+(right-left)/2;
    if(a[mid]>=x){
        right=mid;
    }
    else{
        left=mid+1;
    }
}
return left;
}



int main(){
int a[5]={1,2,3,3,5};

//sort(a,a+n);

printf("%d",binarysearch(a,0,4,3));


return 0;
}
