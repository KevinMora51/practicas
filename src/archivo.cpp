#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream archivoEntrada;
    ofstream archivoSalida;

    // abrir el archivo salida
    archivoSalida.open("archivo_salida.txt");
    if(!archivoSalida){
        cerr<< "Error al abrir el archivo de salida"<<endl;
        return 1;

    
    }

    //escribir el archivo de salida 
    archivoSalida <<"Hola, este es un archivo de salid. "<<endl;

    //cerrar archivo de salida
    archivoSalida.close();

    











    return 0;
}
