#include "Company.h"

int main() 
{
    std::vector<Company> company;

    company.push_back(Company(true));

    runMenu(company);

    return 0;
}
