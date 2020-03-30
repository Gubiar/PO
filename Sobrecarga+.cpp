#include <iostream>

using namespace std;

class NumeroComplexo{
private:
    float a;
    float b;
    char i;

public:

    NumeroComplexo(float a, float b, char i){
        this->a = a;
        this->b = b;
        this->i = i;

        cout << this->a << "+" << this->b << "*" << this->i << endl;
    }

    NumeroComplexo operator+(NumeroComplexo N){
        this->a += N.a;
        this->b += N.b;
        this->i =N.i;

        cout << this->a << "+" << this->b << "*" << this->i << endl;
    }
};


int main() {

    NumeroComplexo func(3, 2 , 'i');
    NumeroComplexo func2(5, -3, 'i');

    func + func2;
    return 0;
}
