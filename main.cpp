#include "Certificate.h"
#include "Employee.h"
#include "Experience.h"
#include "Fresher.h"
#include "Intern.h"
#include "Manage.h"



int main()
{
    Manage manager;
    int choose{0};
    while(true)
    {
        std::cout << "********************************\n";
        std::cout << "1.Add Employee\n";
        std::cout << "2.Remove by ID\n";
        std::cout << "3.Find by ID\n";
        std::cout << "4.EDIT by ID\n";
        std::cout << "5.Display list\n";
        std::cout << "6.Exit\n";
        std::cout << "Enter number: ";
        std::cin >> choose;
        std::cout << "********************************\n";
        switch(choose) 
        {
            case ADD_EPLOYEE:
            {
                manager.Add();
            }
            break;
            case REMOVE_EMPLOYEE:
            {
                manager.Remove();
            }
            break;
            case EDIT_EPLOYEE:
            {
                manager.EditInfo();
            }
            break;
            case FIND_EMPLOYEE:
            {
                manager.FindEmployee();
            }
            break;

            case SHOW_ALL:
            {
                manager.Print();
            }
            break;
            case 6:
            {
                return 0;
            }
            break;
            default:
            // {}
            break;

        }
    }
    return 0;
}