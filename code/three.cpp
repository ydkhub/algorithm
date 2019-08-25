#include<cstdio>
#include<cstring>

int main(){
char str1[50],str2[50];
gets(str1);
gets(str2);

int tmp=strcmp(str1,str2);
if(tmp>0){
    printf("str1>str2\n");
}
else if(tmp<0){
    printf("str1<str2\n");

}
else  printf("str1==str2");
return 0;


}
