#include<cstdio>
#include<algorithm>
#include<queue>
#include<cstring>

using namespace std;

const int maxn=50;
struct node{
int data;
node*lchild;
node*rchild;

};
int prel[maxn],in[maxn],post[maxn];
int n;
node*create(int postL,int postR,int inL,int inR){
if(postL>postR){
    return NULL;
}

node*root=new node;
root->data=post[postR];
int k;
for(k=inL;k<=inR;k++){
    if(in[k]==post[postR]){
        break;
    }
}
int numleft=k-inL;
root->lchild=create(postL,postL+numleft-1,inL,k-1);
root->rchild=create(postL+numleft,postR-1,k+1,inR);
return root;

}

int num=0;
void bfs(node*root){
queue<node*>q;
q.push(root);
while(!q.empty()){
    node*now=q.front();
    q.pop();
    printf("%d",now->data);
    num++;
    if(num<n)printf(" ");
    if(now->lchild!=NULL)q.push(now->lchild);
    if(now->rchild!=NULL)q.push(now->rchild);

}
}

int main(){

scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&post[i]);
}
for(int i=0;i<n;i++){
    scanf("%d",&in[i]);
}
node*root=create(0,n-1,0,n-1);
bfs(root);
return 0;

}
//建树和求层序遍历；

//二叉查找树
void searc(node*root int x){
if(root==NULL){
    printf("swarch failed!");
    return ;
}
if(x==root->data){
    printf("%d",root->data);
}else if(x<root->data){
searc(root->lchild,x);
}
else searc(root->rchild,x);

}

