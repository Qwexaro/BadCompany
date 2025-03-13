#include "Company.h"

Company::Company() :
	name{ "unknow" }, income{ -3 }, expenses{ -1 }, turnover{ -1 }, net_profit{ -1 }, is_public{ true } {}

Company::Company(bool _company_private) : 
	Company() { is_public = _company_private; }


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
	if (!isPublic())
	{
		if (turnover >= 5000000)
		{
			return income;
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
}

long long Company::getExpenses() const
{
	if (!isPublic())
	{
		if (turnover >= 5000000)
		{
			return expenses;
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
}

long long Company::getTurnover() const
{
	if (isPublic() && turnover > 0|| turnover >= 5000000 && turnover > 0)
	{
		return turnover;
	}
	else
	{
		return -1;
	}
}

long long Company::getNetProfit() const
{
	if (!isPublic())
	{
		if (turnover >= 5000000)
		{
			return net_profit;
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
}

bool Company::isPublic() const
{
	return is_public;
}

Company& Company::setName(std::string& _name)
{
	name = _name;
	return *this;
}
Company& Company::setIncome(long long& _income)
{
	if (_income > 0) income = _income;
	return *this;
}
Company& Company::setExpenses(long long& _expenses)
{
	if (_expenses > 0) expenses = _expenses;
	return *this;
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
	isPublic() ? printPublicCompanyInfo() : checkCompanyTurnover();
}