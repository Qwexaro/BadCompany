#include "Company.h"

int main() 
{
    std::vector<Company> company;
    // crete company stated-owned
    company.push_back(Company(false));

    runMenu(company);

    return 0;
}