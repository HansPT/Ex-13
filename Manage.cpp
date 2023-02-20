#include "Manage.h"
#include "Experience.h"
#include "Fresher.h"
#include "Intern.h"
#include "Regex.h"

#define ADD_EXPERIENCE  1
#define ADD_FRESHER     2
#define ADD_INTERN      3

void Manage::Add()
{
    int num{0};
    std::cout << "1.Add Experience Employee\n";
    std::cout << "2.Add Fresher Employee\n";
    std::cout << "3.Add Intern Employee\n";
    std::cout << "Enter number: ";
    std::cin >> num;

    switch (num)
    {
    case ADD_EXPERIENCE:
    {
        unsigned int ID{0};
        std::string fullname;
        std::string birthday;
        std::string phone;
        std::string email;
        unsigned int employee_type{0};
        int exp{0};
        std::string skill;
        std::string CerID;
        std::string CerName;
        std::string CerRank;
        std::string CerDate;

        std::cout << "Type Employee ID: ";
        std::cin >> ID;
        std::cout << "Type Employee name: ";
        std::cin >> fullname;
        birthday = isValidDate::validDate();
        phone = isValidPhone::validPhone();
        email = isValidMail::ValidMail();
        std::cout << "Type Employee Experience years: ";
        std::cin >> exp;
        std::cout << "Type Employee Skill: ";
        std::cin >> skill;

        Employee *exper = new Experience(ID, fullname, birthday, phone, email, employee_type, exp, skill);
        mEmployeeList.push_back(exper);
        exper->InsertCertificate();
    }
    break;
    case ADD_FRESHER:
    {
        unsigned int ID{0};
        std::string fullname;
        std::string birthday;
        std::string phone;
        std::string email;
        std::string Gra_Rank;
        std::string Gra_Date;
        std::string Edu;
        std::string CerID;
        std::string CerName;
        std::string CerRank;
        std::string CerDate;
        unsigned int employee_type{1};

        std::cout << "Type Employee ID: ";
        std::cin >> ID;
        std::cout << "Type Employee name: ";
        std::cin >> fullname;
        std::cout << "Type Employee birth date(DD/MM/YYYY): ";
        birthday = isValidDate::validDate();
        phone = isValidPhone::validPhone();
        email = isValidMail::ValidMail();
        std::cout << "Type Employee Education: ";
        std::cin >> Edu;
        std::cout << "Type Employee Graduation Rank: ";
        std::cin >> Gra_Rank;
        std::cout << "Type Employee Graduation Date(DD/MM/YYYY): ";
        std::cin >> Gra_Date;


        Employee *Fresh = new Fresher(ID, fullname, birthday, phone, email, employee_type, Gra_Date, Gra_Rank, Edu);
        mEmployeeList.push_back(Fresh);
        Fresh->InsertCertificate();
    }
    break;
    case ADD_INTERN:
    {
        unsigned int ID{0};
        std::string fullname;
        std::string birthday;
        std::string phone;
        std::string email;
        std::string MajorityName;
        std::string University;
        unsigned int Semester;
        std::string CerID;
        std::string CerName;
        std::string CerRank;
        std::string CerDate;
        unsigned int employee_type{2};

        std::cout << "Type Employee ID: ";
        std::cin >> ID;
        std::cout << "Type Employee name: ";
        std::cin >> fullname;
        birthday = isValidDate::validDate();
        phone = isValidPhone::validPhone();
        email = isValidMail::ValidMail();
        std::cout << "Type Employee Semester: ";
        std::cin >> Semester;
        std::cout << "Type Employee Majority Name: ";
        std::cin >> MajorityName;
        std::cout << "Type Employee University Name: ";
        std::cin >> University;
        Employee *intern = new Intern(ID, fullname, birthday, phone, email, employee_type, University, MajorityName, Semester);
        mEmployeeList.push_back(intern);
        intern->InsertCertificate();
    }
    break;
    default:
        break;
    }
}
void Manage::Remove()
{
    std::string Removeid;
    std::cout << "Removing ID: ";
    std::cin >> Removeid;
    for (unsigned int i = 0; i < mEmployeeList.size(); i++)
    {
        delete mEmployeeList[i];
        mEmployeeList.erase(mEmployeeList.begin() + i); // trc khi
        break;
    }
    std::cout << "Removing successfully\n";
}
void Manage::EditInfo()
{
    unsigned employeeID;
    std::cout << "Type Employee ID: ";
    std::cin >> employeeID;
    for (Employee *a : mEmployeeList)
    {
        if (a->getID() == employeeID)
        {
            std::string fullname;
            std::string birthday;
            std::string phone;
            std::string email;
            unsigned int employee_type{0};
            int exp{0};

            std::cout << "Type Employee name: ";
            std::cin >> fullname;
            birthday = isValidDate::validDate();
            phone = isValidPhone::validPhone();
            email = isValidMail::ValidMail();
            a->setFullName(fullname);
            a->setBirthday(birthday);
            a->setNumberPhone(phone);
            a->setEmail(email);
        }
    }
}

void Manage::FindEmployee()
{
    unsigned int employeeID;
    std::cout << "Type Employee ID: ";
    std::cin >> employeeID;
    for (Employee *a : mEmployeeList)
    {
        if (a->getID() == employeeID)
        {
            a->ShowInfo();
        }
        else
        {
            std::cout << "Null employee ID: " << employeeID << '\n';
        }
    }
}

void Manage::Print()
{
    std::cout << "There are " << mEmployeeList.size() << " employees\n";
    for (unsigned int i = 0; i < mEmployeeList.size(); i++)
    {
        mEmployeeList[i]->ShowInfo();
    }

}

Manage::Manage() = default;
Manage::~Manage()
{
    for (Employee *a : mEmployeeList)
    {
        if (a)
        {
            delete a;
        }
    }
}