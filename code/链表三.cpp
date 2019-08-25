//链表的创建
#include<cstdio>
#include<cstdlib>

struct node{
int data;
node*next;

};


node*create(int arry[]){
node*head,*p,*pre;
head=new node;
head->next=NULL;
pre=head;
for(int i=0;i<5;i++){
    p=new node;
    p->data=arry[i];
    p->next=NULL;
    pre->next=p;
    pre=p;
}

return head;

}

//增添
void inser(node*head,int pos,int x){
node*p=head;
for(int i=0;i<pos-1;i++){
    p=p->next;
}
node*q=new node;
q->data=x;
q->next=p->next;
p->next=q;
}

//删除
void dele(node*head,int x){
node*p=head->next;
node*pre=head;
while(p!=NULL){
    if(p->data==x){
        pre->next=p->next;
        delete(p);
        p=pre->next;
    }
    else{
        pre=p;
        p=p->next;

    }
}

}

int main(){
int arry[5]={1,2,3,4,5};
node*L=create(arry);
inser(L,2,9);
dele(L,9);
L=L->next;
while(L!=NULL){
    printf("%d",L->data);
    L=L->next;
}
return 0;
}






