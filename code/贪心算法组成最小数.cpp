#include<cstdio>

int main(){

int a[9];
for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
}

for(int i=0;i<10;i++){
    if(i>0&&a[i]>0){
        printf("%d",i);
        a[i]--;
        break;
    }
}
for(int i=0;i<10;i++){
    for(int j=0;j<a[i];j++){
        printf("%d",i);
    }
}
return 0;
}
