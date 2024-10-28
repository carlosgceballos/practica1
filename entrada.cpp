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

  return 0;
}