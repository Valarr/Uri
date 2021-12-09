#include <iostream>
#include <string.h>

#include <bits/stdc++.h>
using namespace std;

struct texto{
	char * let;
	char   old;
};

int main()
{
	int T, Q, OP, V, i, MaxT;
	char S[10001];
	texto vogais[10001];
	texto conso[10001];
	int maxV, maxC, incV, incC;
	scanf("%d", &T);
	MaxT = T;
	while(T--)
	{
		scanf("%s", &S);
		// organiza numa lista encadeada
		V = strlen(S);
		memset(vogais, 0, V*sizeof(texto));
		memset(conso, 0, V*sizeof(texto));
		maxV = 0;
		maxC = 0;
		incV = 0;
		incC = 0;
		for (i = 0; i < V; i++)
		{
			//printf("lendo:%c\n", S[i]);
			if ((S[i] == 'a') || (S[i] == 'e') || (S[i] == 'i') || (S[i] == 'o') || (S[i] == 'u'))
			{
				vogais[maxV++].let = &S[i];
			}
			else
			{
				conso[maxC++].let = &S[i];
			}
		}
		//printf("consoantes: %d - vogais %d\n", maxC, maxV);
		printf("Caso #%d:\n",MaxT-T);
		scanf("%d", &Q);
		while (Q--)
		{
			//printf("Aguardando comando\n");
			scanf("%d", &OP);
			if (!OP)
			{
				scanf("%d", &V);
				//printf("trocando as vogais\n");
				incV += V;
			}
			else if (OP & 0x01)
			{
				scanf("%d", &V);
				//printf("trocando as consoantes\n");
				incC += V;
			}
			else
			{
				
				if (maxV)
				{
					//printf("Antes: %d e depois: %d\n", incV, incV%maxV);
					incV = incV % maxV;
				}
				if (maxC)
				{
					//printf("Antes: %d e depois: %d\n", incC, incC%maxC);
					incC = incC % maxC;
				}
				if (incV > 0)
				{
					// salva os dados antigos
					for (i = 0; i < maxV; i++)
					{
						vogais[i].old = *vogais[i].let;
					}
					// troca
					for (i = 0; i < maxV; i++)
					{
						//printf(".");
						if (i - incV < 0)
						{
							*vogais[i].let = vogais[i - incV + maxV].old;
						}
						else
						{
							*vogais[i].let = vogais[i - incV].old;
						}
					}
					incV = 0;
				}
				if (incC > 0)
				{
					// salva os dados antigos
					for (i = 0; i < maxC; i++)
					{
						conso[i].old = *conso[i].let;
					}
					// troca
					for (i = 0; i < maxC; i++)
					{
						//printf(".");
						if (i - incC < 0)
						{
							*conso[i].let = conso[i - incC + maxC].old;
						}
						else
						{
							*conso[i].let = conso[i - incC].old;
						}
					}
					incC = 0;
				}
				printf("%s\n", S);
			}
			//printf("Comando executado\n");

		}
	}
	return 0;
}