#ifndef __INTERN__
#define __INTERN__


#include "Employee.h"


class Intern : public Employee
{
private:
    std::string mMajors;
    unsigned int mSemeters;
    std::string mUniversity_Name;

public:
    void setMajors(const std::string& majors);
    std::string getMajors();

    void setSemeters(unsigned int Semeters);
    unsigned int getSemeters();

    void setUniversityName(const std::string& University_name);
    std::string getUniversityName();

    void ShowInfo();

    Intern(); 
    Intern(unsigned int ID, std::string fullname, std::string birthday, std::string phone, std::string email, unsigned int employeeType, std::string university, std::string majors, unsigned int semester);
    // Intern(std::string ID, std::string fullname, std::string birthday, std::string phone, std::string email, unsigned int employeeType, std::string university, std::string majors, unsigned int semester,Certificate cer);       
    ~Intern();

};




#endif