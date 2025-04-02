#include <Piedra.hpp>
class Foco
{
private:
    Piedra piedra;
public:
    Foco() {}
    ~Foco() {}
    Humo Fumar(){
        return Piedra.Quemar(); 
    }
};