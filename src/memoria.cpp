#include <iostream>
using namespace std;

class chorizo{

    private:
        bool size;
        bool encendido;
        bool otro;

};

int main(int argc, char const *argv[])
{
    cout<<"Tamaño memoria"<<endl;
    cout<<"Tamaño int"<<sizeof(int)<<endl;
    cout<<"Tamaño char"<<sizeof(char)<<endl;
    cout<<"Tamaño bool"<<sizeof(bool)<<endl;
    cout<<"Tamaño float"<<sizeof(float)<<endl;
    cout<<"Tamaño double"<<sizeof(double)<<endl;

    int a = 27;
    int b = 58;
    cout<<"Direccion de  memoria:"<<endl;
    cout<<"Direccion a:"<<&a<<endl;
    cout<<"Valor a:"<<a<<endl;
    cout<<"Tamaño a:"<<sizeof(a)<<endl;
    
    cout<<"Direccion b:"<<&b<<endl;
    cout<<"Valor     b:"<<b<<endl;
    cout<<"Tamaño b:"<<sizeof(b)<<endl;

    cout<<"--------------------------------------"<<endl;
    cout<<"Direccion de  memoria:"<<endl;
    int* direccionA = &a;

    cout<<"Valor de DireccionA"<< direccionA<< endl;
    cout<< "Tamaño puntero: "<<sizeof(bool*)<<endl;

    cout<<"Dierccion de DireccionA:"<< &direccionA<<endl;
    cout<<"Indiierccion de DireccionA:"<< *direccionA<<endl;

    cout<<"--------------------------------------"<<endl;
    cout<<"Areglo:"<<endl;
    int arreglo[10];
    cout<<"Direccion de areglo: "<<&arreglo<<endl;
    cout<<"Direccion de areglo[0]: "<<&arreglo[0]<<endl;
    cout<<"Direccion de areglo[1]: "<<&arreglo[1]<<endl;
    cout<<"Direccion de areglo +0: "<<&arreglo + 0<<endl;
    cout<<"Direccion de areglo +1: "<<&arreglo + 1<<endl;

    cout<<"--------------------------------------"<<endl;

    cout<<"objetos:"<<endl;
    cout<<"Tamaño chorizo: "<<sizeof(chorizo)<<endl;
    chorizo pruebas;
    cout<<"Dierccion de chorizo: "<<&pruebas<<endl;




    return 0;
}
