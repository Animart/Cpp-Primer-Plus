﻿//iomanip.ерр — использование манипуляторов из iomanip 
//некоторые манипуляторы требуют явной компоновки с библиотекой математических функций
//#include "stdafx.h" --- Visual Studio --- precompiled headers
#include <iostream>
#include <iomanip>
#include <cmath>

//-------------------------------------------------------------------------------------------------
int main()
{
	using namespace std;
	// Использование новых стандартных манипуляторов 
	cout << fixed << right;

	// Использование манипуляторов iomanip для извлечения 
	// квадратного корня и корня четвертой степени 
	cout << setw(6) << "N" << setw(14) << "square root"
		<< setw(15) << "fourth root\n";

	double root;	// извлечение корня 
	for (int n = 10; n <= 100; n += 10)
	{
		root = sqrt(double(n));
		cout << setw(6) << setfill('.') << n << setfill(' ')
			<< setw(12) << setprecision(3) << root
			<< setw(14) << setprecision(4) << sqrt(root)
			<< endl;
	}

	std::cin.get();
	std::cin.get();
	return 0;
}
//-------------------------------------------------------------------------------------------------
/*
N   square root   fourth root
....10       3.162        1.7783
....20       4.472        2.1147
....30       5.477        2.3403
....40       6.325        2.5149
....50       7.071        2.6591
....60       7.746        2.7832
....70       8.367        2.8925
....80       8.944        2.9907
....90       9.487        3.0801
...100      10.000        3.1623
*/