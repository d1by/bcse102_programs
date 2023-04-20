//constructor and deconstructor

#include <iostream>

using namespace std;

class Rectangle{
    public:
        int length;
        int width;

        Rectangle(int l, int w){
            cout << "Constructing..." << endl;
            length = l;
            width = w;
        }

        ~Rectangle(){
            cout << "...Deconstructing" << endl;
        }
};

int main(){
    Rectangle rec1(5,4);
    cout << "Area: " << rec1.length * rec1.width << "\nPerimeter: " << 2*(rec1.length + rec1.width) << endl;

    return 0;
}