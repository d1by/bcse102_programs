//constructor and deconstructor

#include <iostream>

using namespace std;

class Rectangle{
    public:
        int length;
        int width;
        static int runCount;

        Rectangle(int l, int w){
            cout << "Constructing..." << endl;
            length = l;
            width = w;

            runCount++;
        }

        ~Rectangle(){
            cout << "...Deconstructing" << endl;
        }
};

int Rectangle::runCount = 0;
int main(){
    Rectangle rec1(5,4);
    cout << "Area: " << rec1.length * rec1.width << "\nPerimeter: " << 2*(rec1.length + rec1.width) << endl;
    cout<<"Run count: " << Rectangle::runCount << endl;

    Rectangle rec2(3,7);
    cout << "Area: " << rec2.length * rec2.width << "\nPerimeter: " << 2*(rec2.length + rec2.width) << endl;
    cout<<"Run count: " << Rectangle::runCount << endl;    

    return 0;
}