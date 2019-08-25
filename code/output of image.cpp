#include<cstido>
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
    //第二行dao row-1行
    for(int i=2;i<row;i++){
        printf("%c",r);
        for(int i=0;i<col-1;i++){
            printf(" ");
        }
        printf("%c",r);
    }

    for(int i=0;i<col;i++){
        printf("%c",r);
    }
    return 0;
}
