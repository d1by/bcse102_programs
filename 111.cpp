//demonstration of constructor and inheritance
#include <iostream>

class Base{
    public:
        Base(){
            std::cout << "\nDefault of Base";
        }
        Base(int x){
            std::cout << "\nParam of Base: " << x;
        }
};

class Derived : public Base{
    public:
        Derived(){
            std::cout << "\nDefault of Derived";
        }
        Derived(int x){
            std::cout << "\nParam of Derived: " << x;
        }
};

int main(){
    std::cout << "\nDerived d1:\n";
    Derived d1;
    std::cout << "\n\nDerived d2(5):\n";
    Derived d2(5);
}