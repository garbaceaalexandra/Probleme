//Se da un sir de la tastatura
//Ordonare binara
#include "pch.h"
#include <iostream>
int ok=0, sir[100],aux,n;
int main()
{
	std::cout << "Dimensiunea sirului: n=";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cout << "sir["<<i<<"]=";
		std::cin >> sir[i];
	}
	while (ok==0) {
		ok = 1;
		for (int i = 0; i < n - 1; i++) {
			if (sir[i] > sir[i + 1])
			{
				aux = sir[i];
				sir[i] =sir[i + 1];
				sir[i + 1] = aux;
				ok = 0;
			}
		}

	}
	std::cout << "Sirul ordonat:\n";
	for (int i = 0; i < n; i++)
		std::cout << sir[i] << " ";
    
}

