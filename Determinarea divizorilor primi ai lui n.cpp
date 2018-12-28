//Descompunerea in factori primi. Determinarea divizorilor primi ai lui n.

#include "pch.h"
#include <iostream>
int n, divizor, putere;
int main()
{
	std::cout << "Alege un numar:\n";
	std::cout << "n= ";
	std::cin >> n;
	divizor = 2;
	
	while (n > 1)
	{
		if (n % divizor == 0)
		{
			putere = 0;
			while (n % divizor == 0)
			{
				putere += 1;
				n /= divizor;
			}
			if (putere != 0)
				std::cout << divizor << " ^ " << putere<<"\n";
		}
		divizor ++;
	}
}

