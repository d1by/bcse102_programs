//classes and objects

#include <iostream>

using namespace std;

class Rectangle{
    public:
        int length;
        int width;
};

int main(){
    Rectangle rec1;

    rec1.length = 5;
    rec1.width = 4;

    cout << "Area: " << rec1.length * rec1.width << "\nPerimeter: " << 2*(rec1.length + rec1.width) << endl;

    return 0;
}