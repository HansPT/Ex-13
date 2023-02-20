#include "Experience.h"

void Experience::setExplnYear(int& exper)
{
    mExplnYear = exper;
}
int Experience::getExplnYear()
{
    return mExplnYear;
}

void Experience::setProSkill(std::string& proSkill)
{
    mProSkill = proSkill;
}
std::string Experience::getProSkill()
{
    return mProSkill;
}

void Experience::ShowInfo()
{
    std::cout << "--------------------\n";
    std::cout << "Employee Experience:\n";
    std::cout << "1.FullName: " << mFullName << '\n';
    std::cout << "2.ID: " << mID << '\n';
    std::cout << "3.BirthDay: " << mBirthday << '\n';
    std::cout << "4.Phone Number: " << mNumberPhone << '\n';
    std::cout << "5.Email: " << mEmail << '\n';
    std::cout << "6.Employee Type: " << mEmployeeType << '\n';
    std::cout << "7.Experience: " << mExplnYear << " years" << '\n';
    std::cout << "8.ProSkill: " << mProSkill << '\n';
}

Experience::Experience() = default;
Experience::Experience(int exp, std::string proSkill)
// :mExplnYear{exp}, mProSkill{proSkill}
{
    this->setExplnYear(exp);
    this->setProSkill(proSkill);
}

Experience::Experience(unsigned int ID, std::string fullname, std::string birthday, std::string phone, std::string email, unsigned int employeeType, int exp, std::string skill)
:Employee(ID, fullname, birthday, phone, email, employeeType)
{
    this->setExplnYear(exp);
    this->setProSkill(skill);
}
Experience::~Experience() = default;