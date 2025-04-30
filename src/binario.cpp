#include <iostream>
#include<fstream>
#include<string>
using namespace std;

struct Persona
{
    char nombre[50];
    int edad;
};



int main(int argc, char const *argv[])
{
   
    ofstream archivoSalida;

    // abrir el archivo salida
    archivoSalida.open("archivo_salida.bin", ios::binary);
    if(!archivoSalida){
        cerr << "Error al abrir el archivo de salida" <<endl;
        return 1;

    
    }
    Persona p1 = {"juan",30};
    Persona p2 = {"Maria",25};
    //escribir el archivo de salida 
    archivoSalida.write((const char*)(&p1),sizeof(Persona));
    archivoSalida.write((const char*)(&p2),sizeof(Persona));
    //cerrar archivo de salida
    archivoSalida.close();


   ifstream archivoEntrada;
    Persona p;

    // abrir el archivo salida
    archivoEntrada.open("archivo_salida.bin", ios::binary);
    if(!archivoEntrada){
        cerr << "Error al abrir el archivo de entrada"<<endl;
        
        return 1;

    
    }

    //escribir el archivo de salida 
   while (archivoEntrada.read((char*)(&p),sizeof(Persona))){
        cout << "Nombre: "<< p.nombre<< ",Edad: "<<p.edad<<endl;
   }
   

    //cerrar archivo de salida
    archivoEntrada.close();

   






    return 0;
}