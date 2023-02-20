#include <regex>
#include <iostream>



class isValidDate
{
public:
    static std::string validDate()
    {
        const std::regex regexDate("^([0]?[1-9]|[1|2][0-9]|[3][0|1])[./-]([0]?[1-9]|[1][0-2])[./-]([0-9]{4}|[0-9]{2})$");
        std::string result;
        bool check = true;
        while(check)
        {
            std::cout << "Type birthday(DD/MM/YYYY): \n";
            std::getline(std::cin, result);
            if(regex_match(result,regexDate))
            {
                check = false;
            }
            else
            {
                std::cout << "Re-type birthday(DD/MM/YYYY): \n";
                check = true;
            }
        }
        return result;
    
    }
};


class isValidPhone
{
public:
    static std::string validPhone()
    {
        const std::regex regexPhone("^(0?)(3[2-9]|5[6|8|9]|7[0|6-9]|8[0-6|8|9]|9[0-4|6-9])[0-9]{7}$");
        std::string result;
        bool check = true;
        while(check)
        {
            std::cout << "Type phone number: \n";
            std::getline(std::cin, result);
            if(regex_match(result,regexPhone))
            {
                check = false;
            }
            else
            {
                std::cout << "Re-type phone number: \n";
                check = true;
            }
        }
        return result;
    
    }
};