//demonstration of structure and array (array size - 63, print 2 records, use emp details(empid, name, salary))
#include <iostream>
#include <string>

int main(){
    struct Employee{
        int emp_id;
        std::string emp_name;
        int salary;
    };

    struct Employee emp[63];
    int count = 0;

    int flag = 0;
    for(int i=0; i<63; i++){
        if(flag==0){
            count++;
            std::cout << "\n[" << count << "] Enter id: ";
            std::cin >> emp[i].emp_id;
            std::cout << "\n[" << count << "] Enter name: ";
            std::cin >> emp[i].emp_name;
            std::cout << "\n[" << count << "] Enter salary: ";
            std::cin >> emp[i].salary;

            if(count>0){
                std::cout << "\nContinue? (1 - yes, 0 - no)";
                int ch;
                std::cin >> ch;

                if(ch==0)
                    flag = 1;
            }

        else
            break;
        }
    }
    
    for(int i=0; i<count; i++){
        std::cout << "\n\nEmployee " << i+1 << ": ";
        std::cout << "\nEmployee id: " << emp[i].emp_id;
        std::cout << "\nEmployee name: " << emp[i].emp_name;
        std::cout << "\nEmployee salary: " << emp[i].salary;
    }  
}