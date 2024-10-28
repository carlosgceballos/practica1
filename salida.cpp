#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
int x=0;
string data;

ifstream input("./data/data.txt");

if(!input.is_open()){
  cout<<"No se puede acceder al archivo."<<endl;
  return 0;
}

  while(input>>data){
    for(int i=0;i<3; i++){
        switch(i){
          case 0:
        cout<<"Mi nombre es "<<data<<",";
        break;
       case 1:
        cout<< " numero de cedula: "<<data<<",";
        break;
      default:
        cout<<" mi correo es: "<<data<<endl;
        continue;
        }
      input>>data;
    }
}

input.close();
return 0;
}