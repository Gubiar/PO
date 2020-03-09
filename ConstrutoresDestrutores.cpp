#include <iostream>

using namespace std;

class a{
public:
    a(){
        cout << "Objeto a construido" << endl;
    }
    ~a(){
        cout << "Objeto a destruido" << endl;
    }

};
class b :public a{
public:
    b(){
        cout << "Objeto b construido" << endl;
    }
    ~b(){
        cout << "Objeto b destruido" << endl;
    }

};
class c :public b{
public:
    c(){
        cout << "Objeto c construido" << endl;
    }
    ~c(){
        cout << "Objeto c destruido" << endl;
    }

};

int main() {

    c C;

    return 0;
}
