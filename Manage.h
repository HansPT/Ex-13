#ifndef __MANAGE__
#define __MANAGE__

#include "Employee.h"

class Manage
{
private:
    std::vector<Employee*> mEmployeeList;
    // std::vector<Employee> mCertificateList;
    // std::vector<Certificate*> p_mCertificateList;
    // std::vector<Certificate> mCertificateList;

public:
    void Add();
    void Remove();
    void EditInfo();
    void Print();

    void FindEmployee();

    Manage();
    ~Manage();
};






#endif