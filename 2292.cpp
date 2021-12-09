#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	unsigned long long int a, b;
	string s;
	
	cin>>n;
	
	for(int k = 0; k<n ; k++){

		cin>>s>>a;
		
		b = 0LL;
		
		for(int i = 0; i < s.size() ; i++){
			s[i] == 'O'? b += 1LL << i : b += 0LL << i; 
		}

		b += a;
		
		for(int i = 0; s[i]; i++){
			s[i] = (b&1) ? 'O' : 'X';
			b >>= 1LL;
		}
		
		cout<<s<<endl;
	}
}