#include <bits/stdc++.h>
#define N 100005

using namespace std;

int v[N], st[4*N];

void create(int pos, int l, int r) {
  if(l == r) {
    st[pos] = v[l];
    return;
  }
  int m = (l + r) / 2;
  create(2*pos+1, l, m);
  create(2*pos+2, m + 1, r);
  st[pos] = st[2*pos+1] + st[2*pos+2];
  return;
}

void update(int pos, int l, int r, int s) {
  if(l == r){
    st[pos] = 0;
    return;
  }
  int m = (l + r) / 2;
  if(s <= m) {
    update(2*pos+1, l, m, s);
  } else {
    update(2*pos+2, m + 1, r, s);
  }
  st[pos] = st[2*pos+1] + st[2*pos+2];
  return;
}

int query(int pos, int l, int r, int ql, int qr){
  if(l > qr || r < ql) {
    return 0;
  }
  if(l >= ql && r <= qr) {
    return st[pos];
  }
  int m = (l + r) / 2;
  return query(2*pos+1, l, m, ql, qr) + query(2*pos+2, m + 1, r, ql, qr);
}

int main(){
  int n, q;
  char c;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
  getchar();
  create(0, 0, n - 1);
  while(scanf("%c %d", &c, &q) != EOF) {
    getchar();
    if(c == 'a'){
      update(0, 0, n-1, q-1);
    } else {
      printf("%d\n", query(0, 0, n - 1, 0, q - 2));
    }
  }
}
