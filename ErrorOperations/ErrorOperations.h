#pragma once

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
		long double inpm_round(long double measurement, unsigned long long decimals);
	};
}