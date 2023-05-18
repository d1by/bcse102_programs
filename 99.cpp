//demonstration of inline functions

#include <iostream>
using namespace std;

inline int square(int x){
    return x * x; 
}

int main(){
    cout << "Area of square: " << square(3) << endl;
}