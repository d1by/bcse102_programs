//function overloading

#include <iostream>

class printData{
    public:
        
        void print(int x){
            std::cout << "\nInteger: " << x;
        }
        
        void print(double x){
            std::cout << "\nFloat: " << x;
        }

        void print(char x){
            std::cout << "\nCharacter: " << x;
        }
};

int main(){
    printData obj;

    obj.print(5);
    obj.print(6.2);
    obj.print('a');

    return 0;
}