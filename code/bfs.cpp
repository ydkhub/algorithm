//矩阵问题
/*
#include<cstdio>
#include<queue>

using namespace std;
const int maxn=100;
struct node{
int x,y;
}Node;

int n,m;
int mar[maxn][maxn];
bool record[maxn][maxn]={false};
int X[4]={0,0,-1,1};
int Y[4]={1,-1,0,0};

bool judge(int x,int y){
if(x<0||x>=n||y<0||y>=m){
    return false;
}
if(mar[x][y]==0||record[x][y]==true)return false;
return true;
}

void BFS(int x,int y){
queue<node>Q;
Node.x=x;
Node.y=y;
Q.push(Node);
record[x][y]=true;
while(!Q.empty()){
    node top=Q.front();
    Q.pop();
    for(int i=0;i<4;i++){
        int newx=top.x+X[i];
        int newy=top.y+Y[i];
        if(judge(newx,newy)){
            Node.x=newx;
            Node.y=newy;
            Q.push(Node);
            record[newx][newy]=true;
        }

    }

}

}

int  main(){
scanf("%d%d",&n,&m);
int ans=0;
for(int x=0;x<n;x++){
    for(int y=0;y<m;y++){
        scanf("%d",&mar[x][y]);
    }
}
for(int x=0;x<n;x++){
    for(int y=0;y<m;y++){
        if(mar[x][y]==1&&record[x][y]==false){
            ans++;
            BFS(x,y);
        }
    }
}
printf("%d",ans);
return 0;
}
*/

//迷宫问题
#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;
const int maxn=100;
struct node{
int x,y;
int step;
}S,T,Node;


int n,m;
char mar[maxn][maxn];
bool record[maxn][maxn]={false};

int X[4]={0,0,-1,1};
int Y[4]={1,-1,0,0};

bool judge(int x,int y){
if(x<0||x>=n||y<0||y>=m){
    return false;
}
if(mar[x][y]=='*'){
    return false;
}
if(record[x][y]==true){
    return false;
}
return true;
}

int BFS(){
queue<node>Q;
Q.push(S);
//record[S.x][S.y]=true;
while(!Q.empty()){
    node top=Q.front();
    Q.pop();
    if(top.x==T.x&&top.y==T.y){
        return top.step;
    }
    for(int i=0;i<4;i++){
        int newx=top.x+X[i];
        int newy=top.y+Y[i];
        if(judge(newx,newy)){
            Node.x=newx;
            Node.y=newy;
            Node.step=top.step+1;
            Q.push(Node);
            record[newx][newy]=true;
        }
    }
}
return -1;
}

int main (){
scanf("%d%d",&n,&m);
for(int x=0;x<n;x++){
     getchar();
    for(int y=0;y<m;y++){
        mar[x][y]=getchar();
    }
}
scanf("%d%d%d%d",&S.x,&S.y,&T.x,&T.y);
S.step=0;
printf("%d\n",BFS());
return 0;
}
