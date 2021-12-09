#include <bits/stdc++.h>
 
using namespace std;
 
int N, H, v[1002], t[1002];
vector<vector<int> > g(1002);
 
int pd[1002][1002];
 
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("in.in", "r", stdin);
    while(cin >> N >> H){

        //clearing pd
        for(int i = 0; i <= H; i++){
            g[i].clear();
            for(int j = 0; j <= H; j++){
                pd[i][j] = 0;
            }
        }

	
        int total = 0;
        for(int i = 0; i < N; i++){
            cin >> v[i] >> t[i];
            g[t[i]].push_back(v[i]);
            total += v[i];
        }
	
        for(int i = 0; i <= H; i++){
            g[i].push_back(0);//adding a zeroe to help PD
            sort(g[i].begin(), g[i].end(), greater<int>() );
        }
        int ans = 0;
        for(int i = 1; i <= H; i++){
            int sum = 0;
            for(int k = 0; k < g[i].size(); k++){
                for(int j = i; j - k >= 0; j--){
                    pd[i][j] = max(pd[i][j], sum + pd[i - 1][j - k]);
                    ans = max(ans, pd[i][j]);//updating max
                }
                sum += g[i][k];
            }
        }
        cout << total - ans << endl;
    }
    return 0;
}
