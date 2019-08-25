#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

const int maxn=510;
const int inf=100000000;//big data
int n,m,st,ed;
int G[maxn][maxn];//ͼ
int weight[maxn];//���Ȩ
int d[maxn];//���·��
int num[maxn];//�������
int w[maxn];//����Ȩ
bool vis[maxn]={false};//��¼�Ƿ����

void Dijkstra(int s){
     fill(d,d+maxn,inf);//��ʼ��ͼ��
     memset(num,0,sizeof(num));
      memset(w,0,sizeof(w));
      d[s]=0;
      w[s]=weight[s];
      num[s]=1;


    for(int i=0;i<n;i++){
        int u=-1;
        int MIN=inf;
        for(int j=0;j<n;j++){
            if(vis[j]==false&&d[j]<MIN){
                u=j;
                MIN=d[j];
            }
        }
        if(u==-1)return;
        vis[u]=true;
        for(int v=0;v<n;v++){
            if(vis[v]==false&&G[u][v]!=inf){
                if(d[u]+G[u][v]<d[v]){//���ֿ����Ż�ʱ���������·�������µ�Ȩ��
                    d[v]=d[u]+G[u][v];
                    w[v]=w[u]+weight[v];
                    num[v]=num[u];
                }else if(d[u]+G[u][v]==d[v]){
                      if(w[u]+weight[v]>w[v]){
                        w[v]=w[u]+weight[v];
                      }
                     num[v]+=num[u];
                }
            }


        }

    }

     }


     int main(){
     scanf("%d%d%d%d",&n,&m,&st,&ed);
     for(int i=0;i<n;i++){
        scanf("%d",&weight[i]);
     }
     int u,v;
     fill(G[0],G[0]+maxn*maxn,inf);
     for(int i=0;i<m;i++){
        scanf("%d%d",&u,&v);
        scanf("%d",&G[u][v]);
        G[v][u]=G[u][v];//����ͼ�����뷽ʽ
     }

     Dijkstra(st);
     printf("%d %d\n",num[ed],w[ed]);
     return 0;

     }
