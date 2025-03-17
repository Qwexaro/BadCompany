#include "Company.h"

int main()
{
	system("chcp 1251");

	std::vector<Company> company;

	company.push_back(Company(false));

	runMenu(company);

	return 0;
}