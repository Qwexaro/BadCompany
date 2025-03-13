#include "Company.h"

Company::Company() :
	name{ "unknow" }, income{ -1 }, expenses{ -1 }, turnover{ -1 }, net_profit{ -1 }, company_private{ false } {}

Company::Company(bool _company_private) : 
	Company() { _company_private = company_private; }


Company::Company(std::string _name, long long _income, long long _expenses, bool _company_private, long long _turnover, long long _net_profit)
{
	this->name = _name;
	this->income = _income;
	this->expenses = _expenses;
	this->company_private = _company_private;
	this->turnover = _turnover;
	this->net_profit = _net_profit;
}

std::string Company::getName() const
{
	return name;
}

long long Company::getIncome() const
{
	return income;
}

long long Company::getExpenses() const
{
	return expenses;
}

long long Company::getTurnover() const
{
	return turnover;
}

long long Company::getNetProfit() const
{
	return net_profit;
}

bool Company::getCompanyPrivateTrue() const
{
	return company_private;
}


void Company::printFullInfo() const
{
	std::cout << "\n Name of company: " << getName() << ", income: " << getIncome() << ", expenses: " << getExpenses()
		<< ", net_profit: " << getNetProfit() << ", turnover: " << getTurnover() << std::endl;
}

void Company::printPublicCompanyInfo() const
{
	std::cout << "\n Name of company: " << getName() << ", turnover: " << getTurnover() << std::endl;
}

void Company::printNameCompany() const
{
	std::cout << "\n Name of company: " << getName() << std::endl;
}

void Company::checkCompanyTurnover() const
{
	getTurnover() < 5000000 ? printNameCompany() : printFullInfo();
	
}

void Company::printInfo() const
{ 
	getCompanyPrivateTrue() ? printPublicCompanyInfo() : checkCompanyTurnover();
}
