#include <iostream>
#include <chrono>
#include <ctime>


using namespace std;
using namespace chrono;

class carro{
protected:
  string nome;
  string categoria;
  float preco;
  time_t construido;

public:
  void setNome(string nome){
    this -> nome = nome;
  }

  void setCategoria(string categoria){
    this -> categoria = categoria;
  }

  void setPreco(float preco){
    this -> preco = preco;
  }

  void setDataConstrucao(time_t construido){
    this -> construido = construido;
  }

  string getNome(){
    return nome;
  }

  string getCategoria(){
    return categoria;
  }

  float getPreco(){
    return preco;
  }
  time_t getConstruido(){
      return construido;
  }

  carro(){
      using chrono::system_clock;
      duration<int,ratio<60*60*24>> um_dia(1);

      system_clock::time_point hoje=system_clock::now();

      construido = system_clock::to_time_t(hoje);

      cout<<"Data e hora da construcao:" << ctime(&construido) <<endl;
  }

};

class concessionaria:public carro{
protected:
  string nome;
  int cnpj;
  carro* carros;
  int ncarros;

public:

  concessionaria(){

   carros->setCategoria("SUV");
   carros->setPreco(65000);
   carros->setNome("Gol Quadrado");

  }

  ~concessionaria(){
   cout << "\n\n Objeto concessionaria destruído \n\n" << endl;

  }
  void setNome(string nome){
    this -> nome = nome;
  }

  void setCnpj(int cnpj){
    this -> cnpj = cnpj;
  }

  void addCarro(carro* carros){
    this -> carros = carros;
  }

  string getNome(){
    return nome;
  }

  int getCnpj(){
    return cnpj;
  }

  float getPreco(){
    return preco;
  }

  carro* getCarro(int i){
    return carros;
  }

  int getNcarros(){
    return ncarros;
  }

  void imprimeCarros(){
    cout << "Carro" << getNome() << " " << getCategoria() << endl;
    cout << "Custa" << getPreco() << " e foi construido em" << getConstruido() << endl;
  }
};

int main(){

  carro c;

  c.setCategoria("SUV");
  c.setNome("Gol Quadrado");
  c.setPreco(65000);

  if(c.getCategoria() == "SUV"){

      float aux = c.getPreco() * 0.9;
      c.setPreco(aux);

  }

  cout << c.getNome() << ", " << c.getPreco() << ", " << c.getCategoria() << endl;
  
  return 0;
}
