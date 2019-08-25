/*
#include<cstdio>
#include<cstring>
const int maxn=50;

 bool judge(char a[]){
    int len=strlen(a);
    for(int i=0;i<len;i++){
        if(a[i]!=a[len-i-1]){
            return false;
        }
        else{
            return true;
        }
    }
   }

int main()
{
    char str[maxn];
    while(gets(str)){
        bool abb=judge(str);
        if(abb==true){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
*/

#include<cstdio>
#include<cstring>
const int maxn=50;


int main(){


int num=0;
char ans[90];
while(gets(ans)){
    num++;
}
for(int i=num-1;i>=0;i--){
    printf("%s",ans[i]);
    if(i>0){
        printf(" ");
    }
}
return 0;
}


