#include <iostream>
#include "Mascota.hpp"

int main(int argc, char const *argv[])
{
    std::cout<<"Ejemplo mascota"<<std::endl;
    Mascota firulais;



    for(size_t i=0; i<3; i++){
        firulais.Golpear();
    } 

    for(size_t i=0; i<2; i++){
        firulais.Acariciar();
    } 


    std::cout<<"Vida actual:"<<firulais.LeerVida()<<std::endl;



    return 0;
}
