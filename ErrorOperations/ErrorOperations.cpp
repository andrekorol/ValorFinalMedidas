// ErrorOperations.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "ErrorOperations.h"

namespace ErrorOperations
{
	std::tuple<std::vector<std::string>, std::vector<long double>> Functions::get_measurements_vectors()
	{
		// TODO: write output so users know how to enter measurements.
		std::string s;
		std::getline(std::cin, s);
		std::istringstream iss(s);
		std::vector<std::string> str_vec;
		std::vector<long double> ld_vec;
		std::move(std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>(), std::back_inserter(str_vec));
		size_t cap = str_vec.capacity();
		ld_vec.reserve(cap);
		for (auto&& num : str_vec) {
			ld_vec.emplace_back(::atof(num.c_str()));
		}
		auto vector_tuple = std::make_tuple(str_vec, ld_vec);
		return vector_tuple;
	}

	unsigned long long Functions::get_less_decimals(std::vector<std::string> str_vec)
	{
		unsigned long long less_decimals = (std::numeric_limits<unsigned long long>::max)();
		for (auto&& str_num : str_vec) {
			if (str_num.find(".") == std::string::npos)
			{
				less_decimals = 0;
				break;
			}
			std::string decimals = str_num.substr(str_num.find(".") + 1);
			if (decimals.length() < less_decimals)
			{
				less_decimals = decimals.length();
			}
		}
		return less_decimals;
	}

	long double Functions::inpm_round(long double measurement, unsigned long long decimals)
	{
		return 0; // TODO: finish implementation!
	}
}