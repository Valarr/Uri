#include <bits/stdc++.h>

using namespace std;

void floydpocabosta(int n) {
  vector<vector<int>> mat(n, vector<int> (n, 0));
  int A, B;
  while (cin >> A >> B && (A + B)) {
    A--;B--;
    string line; cin >> line;
    int mask = 0;
    for (int i = 0; i < line.size(); ++i) {
      mask |= (1 << (line[i] - 'a'));
    }
    mat[A][B] |= mask;
  }
  //mt for pra funciona, maldito warshall
  for (int k = 0; k < n; ++k)
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
        mat[i][j] |= mat[i][k] & mat[k][j];

  while (cin >> A >> B && (A + B)) {
    A--;B--;
    if (mat[A][B] == 0)
      cout << "-";
    else
      for (int i = 0; i < 30; ++i)
        if ((mat[A][B] >> i) & 1)
          cout << char(i + 'a');
    cout << "\n";
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  while (cin >> n && n){
    floydpocabosta(n);
  }
}