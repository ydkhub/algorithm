#include<cstdio>
int main()
{
    int col;
    char r;
    int row;

    scanf("%d %c",&col,&r);
    if(col%2==0){
        row=col/2;
    }
    else{
        row=col/2+1;
    }
    for(int i=0;i<col;i++){
        printf("%c",r);
    }
    //�ڶ���dao row-1��
    printf("\n");
    for(int i=2;i<row;i++){
        printf("%c",r);
        for(int j=0;j<col-2;j++){
            printf(" ");
        }
        printf("%c\n",r);
    }

    for(int i=0;i<col;i++){
        printf("%c",r);
    }
    return 0;
}
