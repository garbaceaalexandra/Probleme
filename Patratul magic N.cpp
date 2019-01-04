// Ex9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
int a[10][10], n;
int i2, j2;
int main()
{
	std::cin >> n;
	
	
	if (n%2==1 && n>=3)
	{
		int i = 1, j = n / 2 + 1;
		int k;
		a[i][j] = 1;
		k = 2;
		i = i - 1;
		j = j - 1;
		while (k <= n * n)
		{
			int pozi = i + 1;
			int pozj = j + 1;

			if (i < 1)
				i = n - i;

			if (j < 1)
				j = n - j;
			if (i < 1 && j < 1)
			{
				i = n - i;
				j = n - j;
			}
			if (a[i][j] == 0)
			{

				a[i][j] = k;
				i = i - 1;
				j = j - 1;


			}
			else
			{
				i = pozi + 1;
				j = pozj;
				a[i][j] = k;
				i = i - 1;
				j = j - 1;

			}



			k++;
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
				std::cout << a[i][j] << " ";
			std::cout << "\n";
		}
	}
	

	
}

