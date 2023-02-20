#include "Fresher.h"


void Fresher::setGraduation_date(const std::string& date)
{

    mGraduation_date = date;
}
std::string Fresher::getGraduation_date()
{
    return mGraduation_date;
}

void Fresher::setGraduation_Rank(const std::string& rank)
{
    mGraduation_Rank = rank;
}
std::string Fresher::getGraduation_Rank()
{
    return mGraduation_Rank;
}

void Fresher::setEducation(const std::string& education)
{
    mEducation = education;
}
std::string Fresher::getEducation()
{
    return mEducation;
}

void Fresher::ShowInfo()
{
    std::cout << "--------------------\n";
    std::cout << "Employee Fresher:\n";
    std::cout << "1.FullName: " << mFullName << '\n';
    std::cout << "2.ID: " << mID << '\n';
    std::cout << "3.BirthDay: " << mBirthday << '\n';
    std::cout << "4.Phone Number: " << mNumberPhone << '\n';
    std::cout << "5.Email: " << mEmail << '\n';
    std::cout << "6.Employee Type: " << mEmployeeType << '\n';
    std::cout << "7.Education: " << mEducation << '\n';
    std::cout << "8.Graduation Date: " << mGraduation_date << '\n';
    std::cout << "9.Graduation rank: " << mGraduation_Rank << '\n';
}

Fresher::Fresher() = default; 
Fresher::Fresher(unsigned int ID, std::string fullname, std::string birthday, std::string phone, std::string email, unsigned int employeeType, std::string graduation_date, std::string graduation_rank, std::string education)
:Employee(ID, fullname, birthday, phone, email, employeeType)
{
    this->setGraduation_date(graduation_date);
    this->setGraduation_Rank(graduation_rank);
    this->setEducation(education);
}
Fresher::~Fresher() = default;