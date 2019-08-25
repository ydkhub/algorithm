//Êä³öÌÝÐÎ

#include<cstdio>

int main(){
int h;
while(scanf("%d",&h)!=EOF){
    int hmax=h+2*(h-1);
    for(int i=1;i<=h;i++){
        for(int j=1;j<=hmax;j++){
            if(j<=hmax-(h+2*(i-1))){
                printf(" ");
            }
                else{
                    printf("*");
                }
            }
             printf("\n");
        }

    }


return 0;
}

//输出矩形
/*
#include<cstdio>

int main(){
int row,col;
char a;
while(scanf("%d %c",&col,&a)!=EOF){
    if(col%2==0)row=col/2;
    else{
        row=col/2+1;
    }
    for(int i=0;i<col;i++){
        printf("%c",a);
    }
    printf("\n");
    for(int i=0;i<row-2;i++){
       printf("%c",a);
        for(int j=0;j<col-2;j++){
            printf(" ");
        }
       printf("%c\n",a);
    }

    for(int i=0;i<col;i++){
       printf("%c",a);
    }
}
return 0;

}
*/
//先定义数组的排版图形输出箩筐体
/*
#include<cstdio>
int main(){
    char buf[100][100];
    int n;
    char a,b;
    bool whatcase=true;
    while(scanf("%d %c %c",&n,&a,&b)==3){
        if(whatcase==true)whatcase=false;
        else{
            printf("\n");
        }
        for(int i=1,j=1;i<=n;i+=2,j++){
            int x=n/2+1;
            int y=x;
            x-=j-1;
            y-=j-1;
            char c=j%2==1?a:b;
            for(int k=1;k<=i;k++){
                buf[x+k-1][y]=c;
                buf[x][y+k-1]=c;
                buf[x+i-1][y+k-1]=c;
                buf[x+k-1][y+i-1]=c;
            }
        }
        if(n!=1){
            buf[1][1]=' ';
            buf[1][n]=' ';
            buf[n][1]=' ';
            buf[n][n]=' ';

        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                printf("%c",buf[i][j]);
            }
            printf("\n");
        }
}
         return 0;

    }

*/


