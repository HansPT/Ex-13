#include "Intern.h"

void Intern::setMajors(const std::string& majors)
{
    mMajors = majors;
}
std::string Intern::getMajors()
{
    return mMajors;
}

void Intern::setSemeters(unsigned int Semeters)
{
    mSemeters = Semeters;
}
unsigned int Intern::getSemeters()
{
    return mSemeters;
}

void Intern::setUniversityName(const std::string& University_name)
{
    mUniversity_Name = University_name;
}
std::string Intern::getUniversityName()
{
    return mUniversity_Name;
}

void Intern::ShowInfo()
{
    std::cout << "--------------------\n";
    std::cout << "Employee Intern:\n";
    std::cout << "1.FullName: " << mFullName << '\n';
    std::cout << "2.ID: " << mID << '\n';
    std::cout << "3.BirthDay: " << mBirthday << '\n';
    std::cout << "4.Phone Number: " << mNumberPhone << '\n';
    std::cout << "5.Email: " << mEmail << '\n';
    std::cout << "6.Employee Type: " << mEmployeeType << '\n';
    std::cout << "7.University name: " << mUniversity_Name << '\n';
    std::cout << "8.Semeters: " << mSemeters << '\n';
    std::cout << "9.Major: " << mMajors << '\n';
}



Intern::Intern() = default; 
Intern::Intern(unsigned int ID, std::string fullname, std::string birthday, std::string phone, std::string email, unsigned int employeeType, std::string university, std::string majors, unsigned int semester)
:Employee(ID, fullname, birthday, phone, email, employeeType)
{
    this->setUniversityName(university);
    this->setMajors(majors);
    this->setSemeters(semester);
}
// Intern::Intern(std::string ID, std::string fullname, std::string birthday, std::string phone, std::string email, unsigned int employeeType, std::string university, std::string majors, unsigned int semester,Certificate cer)
// :Employee(ID, fullname, birthday, phone, email, employeeType,cer)
// {
//     this->setUniversityName(university);
//     this->setMajors(majors);
//     this->setSemeters(semester);
// } 
Intern::~Intern() = default;