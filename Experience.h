#ifndef __EXPERIENCE__
#define __EXPERIENCE__


#include "Employee.h"


class Experience : public Employee
{
private:
    int mExplnYear;
    std::string mProSkill;
public:
    void setExplnYear(int& exper);
    int getExplnYear();

    void setProSkill(std::string& proSkill);
    std::string getProSkill();

    void ShowInfo() override;

    Experience();
    Experience(int exp, std::string proSkill);
    Experience(unsigned int ID, std::string fullname, std::string birthday, std::string phone, std::string email, unsigned int employeeType, int exp, std::string skill);
    // Experience(std::string ID, std::string fullname, std::string birthday, std::string phone, std::string email, unsigned int employeeType, int exp, std::string skill,Certificate cer);
    ~Experience();
};


#endif