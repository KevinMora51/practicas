#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include<sstream>
#include<list>

using namespace std;

enum TipoPokemon {
    FUEGO,
    AGUA,
    PLANTA,
    ELECTRICIDAD
};

class Pokemon {
private:
    string nombre;
    TipoPokemon tipo;
    int nivel;
public:
    Pokemon(string nombre, TipoPokemon tipo, int nivel) {
        this->nombre = nombre;
        this->tipo = tipo;
        this->nivel = nivel;
    }

    string GetNombre() {
        return nombre;
    }
};

int main(int argc, char const *argv[]) {
    // arreglo clásico
    string frases[10];
    frases[0] = "Frase 1";
    frases[1] = "Frase 2";

    // vector de frases
    vector<string> vFrases;
    vFrases.push_back("Primera Frase");
    vFrases.push_back("Segunda Frase");
    vFrases.push_back("Tercera Frase");
    vFrases.push_back("Cuarta Frase");

    // vector de enteros
    vector<int> vEnteros;
    vEnteros.push_back(3);
    vEnteros.push_back(5);
    vEnteros.push_back(1);
    vEnteros.push_back(0);

    // vector de objetos Pokemon
    vector<Pokemon> pokedex;
    pokedex.push_back(Pokemon("Bulbasaur", PLANTA, 1));
    

    fstream pokeCSV ("assets/pokedex.csv");
    if (!pokeCSV){
        cerr<< "Error leyendo archivo del pokedex"<<endl;
        return EXIT_FAILURE;
    }
    string linea;
    while(getline(pokeCSV,linea)){

        stringstream ss(linea);
        string valor;
        cout<<linea<<endl;
        
        vector<string>  fila;

        while(getline(ss,valor,',')){
            
            fila.push_back(valor);
        }
        
        //crear pokemon
        Pokemon p(fila.at(1),TipoPokemon::AGUA,1);

        //agregarlo a la pokedex
        pokedex.push_back(p);

    }

    cout<<"Pokemons cargados al pokedex =  "<<pokedex.size()<<endl;


    return EXIT_SUCCESS;
}
