//demonstration of unary operator overloading
#include <iostream>

class unaryOverload{
    public:
        int a, b, c;
        unaryOverload(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

        unaryOverload operator-(){
            a = -a;
            b = -b;
            c = -c;
        }

        void display(){
            std::cout << a << ", " << b << ", " << c << "\n";
        }        
};

int main(){
    unaryOverload obj(3, -4, 5);
    obj.display();

    -obj;
    obj.display();
    return 0;
}