#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct persona{
 string nombre;
 int cedula;
 string mail;
}p;


int main(){

    int x=0;  
    ofstream output("./data/data.txt");

    if( ! output.is_open()){
        cout<<"El archivo no pudo ser creado ni abierto ";
        return 0;
    }

    cout<<"cuantos datos va a ingresar?"<<endl;
    cin>> x;

    while(x>0){
        cout<<"ingrese el nombre"<<endl;
        cin>>p.nombre;
        cout<<"ingrese  la cedula"<<endl;
        cin>>p.cedula;
        cout<<"ingrese el email"<<endl;
        cin>>p.mail;
        output<<p.nombre<<" "<<p.cedula<<" "<<p.mail<<endl;
    x--;

    }
    return 0;
}
