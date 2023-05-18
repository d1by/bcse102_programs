//area of square and rectangle w/ function overloading

#include <iostream>

class Area{
    public:

        int area(int s){
            return s*s;
        }

        int area(int l, int w){
            return l*w;
        }
};

int main(){
    Area obj;
    std::cout << "Area of square: " << obj.area(5);
    std::cout << "\nArea of rectangle: " << obj.area(5,6);

    return 0;
}