#include<cstdio>
int main()
{
    int n;
    int x;

    int a[50];
    scanf("%d",&n);
    if(n>=0&&n<=200){
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        scanf("%d",&x);
         int k;
        for(int k=0;k<n;k++){
            if(a[k]==x){
                printf("%d",k);
                break;
            }

        }
        if(k==n){
            printf("-1\n");
        }
    }

   return 0;
}
