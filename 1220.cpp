#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	while (N > 0)
	{
		double dim[1000];
		double total = 0;
		double average = 0;
		double positive = 0;
		double negative = 0;
		for (int i = 0; i < N; i++)
		{
			scanf("%lf", &dim[i]);
			total += dim[i];

		}
		average = total / N;
		
		double atual;
		for (int i = 0; i < N; i++)
		{
			atual = (int)((average - dim[i]) * 100) / 100.00;
			if (atual > 0)
			{
				positive += atual;
			}
			else
			{
				negative += atual;
			}
		}
		if (positive < (-negative))
		{
			//printf("deram menos %.2lf %.2lf?\n", positive, negative);
			positive -= negative + positive;
		}
		printf("$%.2lf\n", positive);
		scanf("%d", &N);
	}
	return 0;
}