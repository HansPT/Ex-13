#include "Employee.h"
#include "Manage.h"

void Employee::setID(const unsigned int& id)
{
    mID = id;
}
unsigned int Employee::getID()
{
    return mID;
}

void Employee::setFullName(const std::string& name)
{
    mFullName = name;
}
std::string Employee::getFullName()
{
    return mFullName;
}

void Employee::setBirthday(const std::string& birthday)
{
    mBirthday = birthday;
}
std::string Employee::getBirthday()
{
    return mBirthday;
}

void Employee::setNumberPhone(const std::string& numberPhone)
{
    mNumberPhone = numberPhone;
}
std::string Employee::getNumberPhone()
{
    return mNumberPhone;
}

void Employee::setEmail(const std::string& email)
{
    mEmail = email;
}
std::string Employee::getEmail()
{
    return mEmail;
}

void Employee::setEmployeeType(unsigned int& employeeType)
{
    mEmployeeType = employeeType;
}
unsigned int Employee::getEmployeeType()
{
    return mEmployeeType;
}

void Employee::InsertCertificate()
{
    int chose{0};
    std::cout << "How many certificates?";
    std::cin >> chose;
    for( int i = 0; i < chose; i++)
    {
        std::cout << " Certificate " << i + 1 << ": \n";
        unsigned int cerID{0};
        std::string cerName;
        unsigned int cerRank{0};
        std::string cerDate;
        std::cout << "Certificate Name: " ;
        std::cin >> cerName;
        std::cout << "Certificate ID: " ;
        std::cin >> cerID;
        std::cout << "Certificate Rank: " ;
        std::cin >> cerRank;
        std::cout << "Certificate Date: " ;
        std::cin >> cerDate;
        Certificate cer(cerID, cerName, cerRank, cerDate);
        mCertificateList.push_back(cer);
    }
}

void Employee::ShowInfo()
{

}

Employee::Employee() = default;
Employee::Employee(unsigned int ID, std::string fullname, std::string birthday, std::string phone, std::string email, unsigned int employeeType)
:mID{ID},mFullName{fullname},mBirthday{birthday},mNumberPhone{phone},mEmail{email},mEmployeeType{employeeType}
{

}
Employee::~Employee() = default;


