#include "Company.h"

Company::Company() :
	name{ "unknow" }, income{ "unknow" }, expenses{ "unknow" }, turnover{ -1 }, net_profit{ -1 }, company_private{ false } {}

Company::Company(bool _company_private) : Company() { _company_private = company_private; }


Company::Company(std::string _name, std::string _income, std::string _expenses, bool _company_private, long long _turnover, long long _net_profit)
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

std::string Company::getIncome() const
{
	return income;
}

std::string Company::getExpenses() const
{
	return expenses;
}

double Company::getTurnover() const
{
	return turnover;
}

double Company::getNetProfit() const
{
	return net_profit;
}

void Company::printInfo() const
{
	std::cout << "\nName company: " << getName() << (turnover >= 5000000  );
}