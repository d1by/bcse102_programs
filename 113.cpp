//demonstration of stucture and pointers
#include <iostream>
#include <string>

int main(){
    struct Person{
        std::string name;
        int age;
    };

    Person *pPer, per;
    pPer = &per;

    std::cout << "Enter name: ";
    std::cin >> pPer->name;
    std::cout << "Enter age: ";
    std::cin >> pPer->age;

    std::cout << pPer->name << " is " << pPer->age << " years old";
};