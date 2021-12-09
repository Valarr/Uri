#include <bits/stdc++.h>

using namespace std;

map <int,int> seg;

int main(){
  int a,b, in, maxx,sec;
  while((cin>>a>>b) && a!=0 && b!=0){
    seg.clear();
    maxx=0,sec=0;
    for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
        cin >> in;
        seg[in]++;
        maxx=max(maxx,seg[in]);
      }
    }
    for(map<int,int>::iterator it=seg.begin();it!=seg.end();it++){
      if(it->second<maxx && it->second>sec){
      	sec = it->second;
      }
    }
    for(map<int,int>::iterator it=seg.begin();it!=seg.end();++it){
      if(it->second==sec){
	      cout << it->first << " ";
      }
    }
    cout << "\n";
  }
}
