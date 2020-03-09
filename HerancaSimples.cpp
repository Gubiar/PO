#include <iostream>

using namespace std;

class aeronave{ //classe basica
public:
    string fabricante;
    int modelo;

public:
    void setFabricante(string fabricante){
        this->fabricante=fabricante;
    }
    void setModelo(int modelo){
        this->modelo = modelo;
    }
    string getFabricante(){
        return fabricante;
    }
    int getModelo(){
        return modelo;
    }

};

class aviao :public aeronave{ //classe derivada
public:
    bool continental;
    string categoria;
    int qtde_motores;
public:
    void setContinental(bool resposta){
        continental = resposta;
    }
    void setCategoria(string categoria){
        this->categoria = categoria;
    }
    int setMotores(int qtde_motores){
        this->qtde_motores = qtde_motores;
    }
    bool getContinental(){
        return continental;
    }
    string getCategoria(){
        return categoria;
    }
    int getMotores(){
        return qtde_motores;
    }
};

int main() {

    aviao a;

    a.setFabricante("boeing");
    a.setModelo(747);
    a.setCategoria("militar");
    a.setMotores(4);

    cout << "Aviao " << a.getFabricante() <<" " << a.getModelo() << endl;

    cout << "é um avião " << a.getCategoria() << " de " << a.getMotores() << " motores" << endl;

}
