#include<cstdio>
#include<vector>

using namespace std;

int main(){
vector<int> vi;
//int m;
//scanf("%d",&m);
for(int i=0;i<=5;i++){
    vi.push_back(i);
}

//for(vector<int>::iterator it=vi.begin();it!=vi.end();it++){
  //  printf("%d ",*it);

  vi.insert(vi.begin()+1,233);
  for(int i=0;i<vi.size();i++){
    printf("%d ",vi[i]);
  }
return 0;
}
