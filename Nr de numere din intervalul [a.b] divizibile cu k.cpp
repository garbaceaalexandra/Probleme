// Numarul de numere din intervalul [a,b] divizibile cu k

#include "pch.h"
#include <iostream>
int a, b, k;
int counter=0;
int main()
{
    std::cout << "Alege intervalul \n";
	std::cout << "a= ";
	std::cin >> a;
	std::cout << "b= ";
	std::cin >> b;
	std::cout << "\n";
	std::cout << "Alege divizorul \n";
	std::cout << "k= ";
	std::cin >> k;
	for (int i = a; i <= b; i++)
	{
		if (i%k == 0)
			counter++;

	}
	std::cout << "Numarul de numere din intervalul [" << a << "," << b << "] divizibile cu " << k << " este: " << counter;
}

