//this object

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

int main(){
    Rectangle rec1(5,4);

    cout << "Area: " << rec1.length * rec1.width << "\nPerimeter: " << 2*(rec1.length + rec1.width) << endl;

    return 0;
}