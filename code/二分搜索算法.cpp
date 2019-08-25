/*
#include<cstdio>


int binarysearch(int a[],int left,int right,int x){
        int mid;
        while(left<=right){
            mid=(left+right)/2;
            if(a[mid]==x)return mid;
            else if(a[mid]>x){
                right=mid-1;
            }else{
             left=mid+1;
            }
        }
 return -1;
}


int main(){
const int n=10;
int a[n]={0,1,2,3,4,7,9,10,13,16};
printf("%d",binarysearch(a,0,9,7));
return 0;
}
此程序解决二分法查找是否存在某数的问题
*/

//二分法的一般求解模板
//lower_bound函数
/*
int solve(int left int right){
int mid;
while(left<right){
    mid=(left+right)/2;
    if(left>=x){
        right=mid;
    }else{
         left=mid+1;
    }

    return left;
}

}
*/
//求解函数的0根
#include<cstdio>
const int sep=1e-5;
double fun(int x){
return x*x-3;
}

double solve(double l ,double r){
double mid;
double left=l;
double right=r;
while(right-left>sep){
    mid=(left+right)/2;
    if(fun(mid)<0){
        left=mid;
    }else{
        right=mid;
    }

}
return mid;
}

int main(){
    double r,n;
    scanf("%lf %lf",&r,&n);
    printf("%.2f",solve(r,n));
    return 0;

}
