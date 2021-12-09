#include <bits/stdc++.h>

using namespace std;

char grafo[1030][1030];
int n,m,dx[]={1,-1,0,0},dy[]={0,0,-1,1};

bool taDentro(int i,int j){
	if(i<0 || i>=n || j <0 || j>=m){ return false;}
	return grafo[i][j] == '.';
}

void dfs(int i, int j){
	grafo[i][j] = 'o';
	for(int x = 0; x < 4;x++){
		if(taDentro(i + dx[x], j + dy[x])){
			dfs(i + dx[x], j + dy[x]);
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> grafo[i];
	}
	int ans = 0;

	for(int i = 0; i<n; i++){
		for(int j = 0; j < m; j++){
			if(grafo[i][j] == '.'){
				ans++;
				dfs(i,j);
			}
		}
	}
	cout << ans << "\n";
}