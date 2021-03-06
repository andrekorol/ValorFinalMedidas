// ValorFinalMedidas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ErrorOperations.h"
using namespace std;
using str = string;
using ld = long double;
using ull = unsigned long long;

int main()
{
	vector<str> str_vec;
	vector<ld> ld_vec;
	tie(str_vec, ld_vec) = ErrorOperations::Functions::get_measurements_vectors();
	ull less_decimals = ErrorOperations::Functions::get_less_decimals(str_vec);
	system("pause");

	return 0;
}
