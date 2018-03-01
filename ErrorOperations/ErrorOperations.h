#pragma once

#include "stdafx.h"
#include <vector>

#ifdef ERROR_OPERATIONS_EXPORTS  
#define ERROR_OPERATIONS_API __declspec(dllexport)   
#else  
#define ERROR_OPERATIONS_API __declspec(dllimport)
#endif

namespace ErrorOperations
{
	class Functions
	{
	public:
		static ERROR_OPERATIONS_API std::tuple<std::vector<std::string>, std::vector<long double>> get_measurements_vectors();
		static ERROR_OPERATIONS_API unsigned long long get_less_decimals(std::vector<std::string> str_vec);
		static ERROR_OPERATIONS_API long double inpm_round(long double measurement, unsigned long long decimals);
	};
}