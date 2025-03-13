#include "Company.h"

void errorMessage()
{
    system("cls"); std::cout << "Command is not define !" << std::endl;
}

void exit()
{
    system("cls"); std::cout << "GoodBye!" << std::endl;
}

void printCompany(std::vector<Company> company)
{
    system("cls"); for (int i = 0; i < company.size(); i++) company.at(i).printInfo();
}

void options()
{
    std::cout << "1 - Write companes" << std::endl << "2 - Create company" << std::endl
    << "0 - Exit" << std::endl << "~# ";
}

void createCompany(std::vector<Company>& company)
{
    std::string name; long double icome, expenses;
    bool company_private;
    std::cout << "Enter name company: "; std::cin >> name;
    std::cout << "Enter icome: "; std::cin >> icome;
    std::cout << "Enter expenses: "; std::cin >> expenses;
    long double turnover = icome + expenses;
    long double net_profit = icome - expenses;

    std::cout << "Is your company state-owned?\n1 - yes\n0 - no" << std::endl; std::cin >> company_private;
    company.push_back(Company(name, icome, expenses, company_private, turnover, net_profit));

}

void runMenu(std::vector<Company>& company)
{
    int choice = 0;
    do
    {
        options(); std::cin >> choice;

        switch (choice)
        {
            case 1: printCompany(company); break;
            case 2: createCompany(company); break;
            case 0: exit(); break;
            default: errorMessage(); break;
        }
    } 
    while (choice != 0);
}
