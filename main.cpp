#include <cstdlib>
#include "Funciones.h"

using namespace std;



int main(int argc, char** argv) {
    coordenada a, b, c;
    a.x = 2; 
    a.y = 4;
    b.x = -1;
    b.y = 1;
    c.x = 4;
    c.y = -1;
    
    angulos(a, b, c);
    lados(a, b, c);
    
    return 0;
}

