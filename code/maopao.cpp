#include<cstdio>
int main ()
{
    int a[6]={5,8,7,3,6,4};
    for(int i=1;i<=5;i++){
        for(int j=0;j<6-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
 for (int i=1;i<6;i++){
    printf("%d",a[i]);
 }
    return 0;
}
