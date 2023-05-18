//passing object as argument

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
        int area(Rectangle rec){
            return rec.length * rec.width;
        }
};

int main(){
    Rectangle rec1(5,4);

    cout << "Area: " << rec1.area(rec1) << endl;

    return 0;
}