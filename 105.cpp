//demonstration of friend class

#include <iostream>

using namespace std;

class banana{
    private:
        int beans = 10;

    public:
        friend class buddy;
};

class buddy{
    public:
        void display(banana obj){
            cout << "Private variable: " << obj.beans << endl;
        } 
};

int main(){
    banana obj;
    buddy obj2;
    obj2.display(obj);

    return 0;
}