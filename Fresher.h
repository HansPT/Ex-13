#ifndef __FRESHER__
#define __FRESHER__

#include "Employee.h"


class Fresher : public Employee
{
private:
    std::string mGraduation_date;
    std::string mGraduation_Rank;
    std::string mEducation;

public:
    void setGraduation_date(const std::string& date);
    std::string getGraduation_date();

    void setGraduation_Rank(const std::string& rank);
    std::string getGraduation_Rank();

    void setEducation(const std::string& education);
    std::string getEducation();

    void ShowInfo()override;

    Fresher(); 
    Fresher(unsigned int ID, std::string fullname, std::string birthday, std::string phone, std::string email, unsigned int employeeType, std::string graduation_date, std::string graduation_rank, std::string education);
    // Fresher(std::string ID, std::string fullname, std::string birthday, std::string phone, std::string email, unsigned int employeeType, std::string graduation_date, std::string graduation_rank, std::string education,Certificate cer);       
    ~Fresher();


};




#endif