#ifndef __EMPLOYEE__
#define __EMPLOYEE__

#include "include.h"
#include "Certificate.h"



class Employee
{
protected:
    unsigned int mID;// kiểu int 
    std::string mFullName;
    std::string mBirthday;
    std::string mNumberPhone;
    std::string mEmail;
    unsigned int mEmployeeType{0};
    std::vector<Certificate> mCertificateList;
public:
    unsigned int mCount{0};

    void setID(const unsigned int& id);
    unsigned int getID();

    void setFullName(const std::string& name);
    std::string getFullName();

    void setBirthday(const std::string& birthday);
    std::string getBirthday();

    void setNumberPhone(const std::string& numberPhone);
    std::string getNumberPhone();

    void setEmail(const std::string& email);
    std::string getEmail();

    void setEmployeeType(unsigned int& employeeType);
    unsigned int getEmployeeType();

    virtual void ShowInfo();

    void InsertCertificate();
    // friend Certificate;
    

    Employee();
    Employee(unsigned int ID, std::string fullname, std::string birthday, std::string phone, std::string email, unsigned int employeeType);
    virtual ~Employee();

};



#endif