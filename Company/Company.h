#pragma once

#include <iostream>
#include <string>

class Company
{
	std::string name, income, expenses;
	long long turnover, net_profit;
	bool company_private;

public:
	
	Company();
	Company(bool _company_private);
	Company(std::string _name, std::string _income, std::string _expenses, bool _company, long long _turnover, long long _net_profit);
		
	std::string getName() const;
	std::string getIncome() const;
	std::string getExpenses() const;

	double getTurnover() const;
	double getNetProfit() const;

	void printInfo() const;
};