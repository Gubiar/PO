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

class armameno {
public:
    bool misseis;
    bool metralhadora;
public:
    bool setMisseis(bool misseis){
        this->misseis = misseis;
    }
    bool setMetralhadora(bool metralhadora){
        this->metralhadora = metralhadora;
    }
    bool getMisseis(){
        return misseis;
    }
    bool getMetralhadora(){
        return metralhadora;
    }
};

class aviaoCombate :public aviao, public armameno{ //herança multipla
public:
    string modelo;
public:
    aviaoCombate(){
    this->categoria = "militar";
    }
    ~aviaoCombate(){
        cout << "\n\n Objeto avião de combate destruido \n\n" << endl;
    }
    void setModelo(string modelo){
        this->modelo = modelo;
    }
    string getModelo(){
        return  modelo;
    }

};
int main() {

    aviaoCombate b;

    b.setModelo("f15");
    b.setMotores(2);
    b.setMetralhadora(true);
    b.setMisseis(true);

    cout << "Avião de combate " << b.getModelo() << " com " << b.getMotores() << "motores" <<endl;

}
