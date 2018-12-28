// Determinarea divizorilor proprii ai lui n

#include "pch.h"
#include <iostream>
int n;
int main()
{
    std::cout << "Alege un numar \n";
	std::cout << "n= ";
	std::cin >> n;
	for (int i = 2; i <= n/2; i++)
	{
		if (n%i == 0)
			std::cout << i << " ";
	}
}
