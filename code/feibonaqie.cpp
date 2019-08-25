#include<iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;

    int *F= new int[N];
    F[0]=0; F[1]=1;

    for(int n=2;n<N;n++)

           F[n]=F[n-1]+F[n-2];

    for(int m=0;m<N;m++)
       {
           cout<<F[m]<<",";

       }

     delete []F;
     return 0;


}
