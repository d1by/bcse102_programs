//function with default arguments

#include <iostream>

using namespace std;

class Rectangle{
    public:
        int length;
        int width;

        Rectangle(int length, int width){
            this->length = length;
            this->width = width;
        }
        
};

int area(int, int);

int main(){
    Rectangle rec1(5,4);

    cout << "Area: " << area(rec1.length, rec1.width) << endl;

    return 0;
}

int area(int l, int w){
    return l*w;
}