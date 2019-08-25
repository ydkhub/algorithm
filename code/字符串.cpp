#include<cstdio>

int main(){
char a[100][100];
int n,m;
scanf("%d%d",&n,&m);
for(int i=0;i<n;i++){
       getchar();
     for(int j=0;j<m;j++){
         a[i][j]=getchar();
     }
//a[i][m+1]='\0';

}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
          putchar(a[i][j]);
     }
   printf("\n");

}
return 0;
}
