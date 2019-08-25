//创建链表
#include<cstdio>
#include<cstdlib>

struct node{
int data;//数据阈
node* next;//指针阈
};

node* create(int array[]){
node*p,*pre,*head;
head=new node;
head->next=NULL;
pre=head;
for(int i=0;i<5;i++){
    p=new node;
    p->data=array[i];
    p->next=NULL;
    pre->next=p;
    pre=p;
}
return head;
}

int main(){
int array[5]={1,2,3,4,5};
node* L=create(array);
L=L->next;
while(L!=NULL){
    printf("%d ",L->data);
    L=L->next;
}
return 0;
}
