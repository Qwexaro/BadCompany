#include "Company.h"

Company::Company() :
	name{ "unknow" }, income{ 0 }, expenses{ 0 }, turnover{ 0 }, net_profit{ 0 }, is_public{ true } {
}

Company::Company(bool _is_public) :
	Company() {
	is_public = _is_public;
}

Company::Company(std::string _name, long long _income, long long _expenses, bool is_public, long long _turnover, long long _net_profit)
{
	setName(_name);
	setIncome(_income);
	setExpenses(_expenses);
	this->is_public = is_public;
	this->turnover = _turnover;
	this->net_profit = _net_profit;
}

std::string Company::getName() const
{
	return name;
}

long long Company::getIncome() const
{
	if (!isPublic() && getTurnover() > 5000000)
	{
		return income;
	}
	else throw std::exception("Вы не можете получить доступ к income.");
}

long long Company::getExpenses() const
{
	if (!isPublic() && getTurnover() > 5000000)
	{
		return expenses;
	}
	else throw std::exception("Вы не можете получить доступ к expenses");
}

long long Company::getTurnover() const
{
	if (!isPublic() && turnover > 5000000)
	{
		return turnover;
	}
	if (isPublic())
	{
		return turnover;
	}
}

long long Company::getNetProfit() const
{
	if (!isPublic() && turnover > 5000000)
	{
		return net_profit;
	}
	else throw std::exception("Вы не можете получить доступ к net profit.");
}

bool Company::isPublic() const
{
	return is_public;
}

Company& Company::setName(std::string& _name)
{
	name = _name; return *this;
}
Company& Company::setIncome(long long& _income)
{
	if (_income > 0) {
		income = _income;
		turnover = income + expenses;
		net_profit = income - expenses;
		return *this;
	}
}
Company& Company::setExpenses(long long& _expenses)
{
	if (_expenses > 0) {
		expenses = _expenses;
		turnover = income + expenses;
		net_profit = income - expenses;
		return *this;
	}
}

void Company::printFullInfo() const
{
	try
	{
		std::cout << "\n Name of company: " << getName() << ", income: " << getIncome() << ", expenses: " << getExpenses()
			<< ", net_profit: " << getNetProfit() << ", turnover: " << getTurnover() << std::endl;
	}
	catch (const std::exception& error) { std::cout << error.what(); }
}

void Company::printPublicCompanyInfo() const
{
	try
	{
		std::cout << "\n Name of company: " << getName() << ", turnover: " << getTurnover() << std::endl;
	}
	catch (const std::exception& error) { std::cout << error.what(); }
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
	isPublic() ? printPublicCompanyInfo() : checkCompanyTurnover();
}