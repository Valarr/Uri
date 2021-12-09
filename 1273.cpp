#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	int num = 0;
	bool a, b;
	a = false;
	b = true;

	while(cin>>n && n){

		string v[n];
		int t[n], maior = 0;

		if(a) cout<<endl;

		for(int i = 0; i<n ; i++){ 
			cin>>v[i];
			t[i] = v[i].size();
			if(t[i] > maior) maior = t[i];
		}

		for(int i = 0 ; i<n ; i++){

			if(v[i].size() < maior){
				for(int j = 0 ; j<=maior-v[i].size()-1 ; j++) cout<<" ";
			}

			cout<<v[i]<<endl;

		}

		if(b){
			b = false;
			a = true;
		}

	}

}