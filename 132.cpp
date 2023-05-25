// overloading function template
#include <iostream>
using namespace std;

template<class X> void fun(X a){
    cout << "Value of a is: " << a << endl;
}

template <class X, class Y> void fun(X b, Y c){
    cout << "Value of b is: " << b << endl;
    cout << "Value of c is: " << c << endl;
}

int main(){
    fun(1);
    fun(2,3);

    return 0;
}