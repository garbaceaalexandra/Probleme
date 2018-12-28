// Suma nr pana la un nr dat de la tastatura
#include "pch.h"
#include <iostream>
int n,sum=0;
int main()
{
    std::cout << "Alege un numar: ";
	std::cin >> n;
	for (int i = 1; i <n; i++)
	{
		sum = sum + i;
	}
	std::cout << "Suma numerelor pana la "<< n << " este: ";
	std::cout << sum;


}
