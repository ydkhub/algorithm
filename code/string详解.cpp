#include<string>
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
string str1="abcd";
string str2="efgh";
//str1.insert(str1.begin()+3,str2.begin(),str2.end());
//cout<<str1<<endl;
//eraseº¯Êı
//str1.erase(str1.begin()+2,str1.end());
str1.erase(2,2);
cout<<str1<<endl;
return 0;
}
