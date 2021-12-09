#include <bits/stdc++.h>

using namespace std;

bool verificarNumero (int numeroDaVez){
	
	int cache[10];
	
	bool numeroRepetido = false;
	
	for(int cont = 0; cont < 10; cont++){
		cache[cont] = 0;
	}
	
	while(numeroDaVez != 0){
				
		int unidade = numeroDaVez % 10;
		numeroDaVez /= 10;
				
		if(cache[unidade] == 0){
			cache[unidade] = 1;
		}else{
			numeroRepetido = true;
			break;
		}
				
	}
	
	return numeroRepetido;
	
}

int main(){
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);
	
	int n1;
	int n2;
	
	while(scanf("%d %d", &n1, &n2) != EOF){
		
		int qtd = 0;
				
		for(int cont = n1; cont <= n2; cont++){		
		
			if(verificarNumero(cont) == false){
				qtd++;
			}
			
		}
		
		printf("%d\n", qtd);
		
	}
}