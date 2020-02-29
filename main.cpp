#include <iostream>
#include "punto.h"
#include <cmath>

using namespace std;

int main(){
    Punto P1,P2;

    P1.asignarX(3);
    P1.asignarY(4);
    P1.asignarZ(5);

    P1.printData();
    P1.Negate();
    P1.Norm();

    P2.asignarX(1);
    P2.asignarY(1);
    P2.asignarZ(1);

    P2.printData();
    P2.Negate();
    P2.Norm();

}
