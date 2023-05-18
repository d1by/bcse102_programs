//binary operator overloading
#include <iostream>

class complex{
    public:
        int real, imag;

        complex(){
            real = 0;
            imag = 0;
        }
        complex(int r, int i){
            real = r;
            imag = i;
        }

        complex operator+(complex C){
            complex ans;
            ans.real = real + C.real;
            ans.imag = imag + C.imag;

            return ans;
        }
};

int main(){
    complex C1, C2, C3;
    C1 = complex(5, 2);
    C2 = complex(3, 9);

    C3 = C1 + C2;

    std::cout << C3.real << " + j" << C3.imag;
}