#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct Persona{
  string name;
  int cedula;
  string email;
};


int main(){
  Persona person;
  int x = 0;
  ofstream output("./data/data.txt");

  if (!output.is_open()){
    cout<<"No se puede acceder al archivo"<<endl;
    return 0;
  }

    cout<<"Cuantos datos desea ingresar?"<<endl;
    cin>>x;
    while(x>0){
      cout<<"Ingrese el nombre: ";
      cin>>person.name;
      cout<<"Ingrese la cedula: ";
      cin>>person.cedula;
      cout<<"Ingrese el email: ";
      cin>>person.email;
      cout<<endl;

      output<<person.name<<"\t"<<person.cedula<<"\t"<<person.email<<endl;

      x--;
    }

  return 0;
}