#pragma once

#include <iostream>
#include <string>
#include <vector>

class Company
{
	std::string name;
	long long turnover, net_profit, income, expenses;
	bool is_public;

public:

	Company();
	Company(bool _company_private);
	Company(std::string _name, long long _income, long long _expenses, bool _company_private, long long _turnover, long long _net_profit);

	std::string getName() const;
	long long getIncome() const;
	long long getExpenses() const;

	long long getTurnover() const;
	long long getNetProfit() const;
	bool isPublic() const;

	Company& setName(std::string& _name);
	Company& setIncome(long long& _icome);
	Company& setExpenses(long long& _expenses);

	void printPublicCompanyInfo() const;

	void checkCompanyTurnover() const;

	void printInfo() const;
	void printFullInfo() const;
	void printNameCompany() const;
};

void runMenu(std::vector<Company>& company);