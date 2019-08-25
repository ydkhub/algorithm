
//ÔÂ±ıÎÊÌâ
#include<cstdio>
#include<algorithm>

using namespace std;


struct moomcake{
double num;
double sale;
double price;
}sdd[500];

bool cmp(moomcake a,moomcake b){
return a.price>b.price;
}

int main(){
int m,n;
scanf("%lf %lf",&m,&n);
    for(int i=0;i<m;i++){
        scanf("%lf",&sdd[i].num);
    }
    for(int i=0;i<m;i++){
        scanf("%lf",&sdd[i].sale);
        sdd[i].price=sdd[i].sale/sdd[i].num;

    }

    sort(sdd,sdd+m,cmp);

    double aps=0;
    for(int i=0;i<m;i++){

        if(sdd[i].num<=n){
            n-=sdd[i].num;
            aps+=sdd[i].sale;

        }
        else{

            aps+=sdd[i].price*n;
            break;
        }


    }

printf("%.2f",aps);


return 0;
}
