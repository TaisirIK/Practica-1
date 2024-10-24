#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int x=0;
    int cedula=0;
    int data=0;
    string nombre;
    string mail;

    ifstream input("./data/data.txt");

    if( !input.is_open()){
        cout<<"No se puede abrir";
        return 0;
    }
    while(input>>nombre>>cedula>>mail){
        cout<<"El nombre es: "<<nombre<<", la ceedula es: "<<cedula<<" y el email es: "<<mail<<endl;

    }
    input.close();
    return 0;

}