#include<cstdio>
#include<queue>

using namespace std;

//队列，先进先出的数据结构
int main(){
priority_queue<int> q;
for(int i=0;i<=5;i++){
    q.push(i);
}
//for(int i=0;i<3;i++){
 //  q.pop();
//}
for(int i=0;i<2;i++){
    q.pop();
}

printf("%d",q.top());
return 0;
}

//n
