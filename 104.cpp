//demonstration of friend function

#include <iostream>

using namespace std;

class banana{
    private:
        int beans = 10;

    public:
        friend int buddy(banana obj);
};

int buddy(banana obj){
    cout << "Private variable: " << obj.beans << endl; 
}

int main(){
    banana obj;
    buddy(obj);

    return 0;
}