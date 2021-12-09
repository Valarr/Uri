#include <bits/stdc++.h>

using namespace std;

int main() {
	double mass_water, mass_ice, temp_water, temp_ice, mass;
	double energy, temp, ice_energy, water_energy;
	double toIce, transition, toWater;
	scanf("%lf %lf %lf %lf", &mass_water, &mass_ice, &temp_water, &temp_ice);
	while ((mass_water != 0) || (mass_ice != 0) || temp_water != 0 || temp_ice != 0)
	{
		//calcular energia do gelo
		ice_energy = 2.09*mass_ice*(temp_ice + 30);

		//calcular energia da agua
		water_energy = (4.19*mass_water*temp_water) + (335 * mass_water) + (2.09*mass_water * 30); // energia de 0 até temp

		// energia total do sistema, com base em -30ºC
		energy = ice_energy + water_energy;
		mass = mass_water + mass_ice;

		toIce = 2.09 * mass * 30;
		transition = 335 * mass;
		toWater = 4.19 * mass * 100;

		if (toIce >= energy) // quer dizer que tudo ta congelado
		{
			temp = - 30 + 30*(energy/toIce);
			printf("%.1lf g of ice and 0.0 g of water at %.1lf C\n",mass, temp);
		}
		else if ((toIce + transition) >= energy)
		{
			energy -= toIce;
			mass_ice = mass*(1 - (energy / transition));
			mass_water = mass*(energy / transition);
			printf("%.1lf g of ice and %.1lf g of water at 0.0 C\n", mass_ice, mass_water);
		}
		else
		{
			energy -= toIce + transition;
			temp = 100 * (energy/toWater);
			printf("0.0 g of ice and %.1lf g of water at %.1lf C\n", mass, temp);
		}
		
		scanf("%lf %lf %lf %lf", &mass_water, &mass_ice, &temp_water, &temp_ice);
	}
	return 0;
}