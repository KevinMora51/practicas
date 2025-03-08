#include<humo.hpp>
class Piedra
{
private:
    Humo humo;
public:
    Piedra() {}
    ~Piedra() {}
    Humo Quemar(){
        return Humo();
    }
};