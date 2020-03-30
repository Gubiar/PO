#include <iostream>
#include <cmath>

using namespace std;

class DistanciaDoisPontos{
private:
    int x;
    int y;

public:

    DistanciaDoisPontos(int x, int y){
        this->x = x;
        this->y = y;


    }

    DistanciaDoisPontos operator*(DistanciaDoisPontos N){
        this->x = N.x - x;
        this->y = N.y - y;

        cout << sqrt(pow(x,2) + pow(y,2)) << endl;

    }
};


int main() {


    DistanciaDoisPontos func(3, 3);
    DistanciaDoisPontos func2(5, 5);

    func * func2;
    return 0;
}
