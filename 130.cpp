#include <iostream>
using namespace std;

template<class T> T add(T &a, T &b){
    T result = a + b;
    return result;
}

int main(){
    int i=2;
    int j=3;
    float m = 2.3;
    float n = 1.2;
    cout << "Addition of i and j is: " << add(i, j) << endl;
    cout << "\nAddition of m and n is: " << add(m, n) << endl;
}