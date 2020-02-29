#include <iostream>
#include "Punto.h"
#include <cmath>
#include <math.h>
using std::cout;
using std::endl;

Punto::Punto(float x_coord, float y_coord, float z_coord){
    x=x_coord;
    y=y_coord;
    z=z_coord;
}
Punto::Punto(){

}

void Punto::asignarX(float x_coord){
    x=x_coord;
}
float Punto::obtenerX()const{
    return x;
}
void Punto::asignarY(float y_coord){
    y=y_coord;
}
float Punto::obtenerY()const{
    return y;
}
void Punto::asignarZ(float z_coord){
    z=z_coord;
}
float Punto::obtenerZ()const{
    return z;
}

void Punto::Norm(){
float n=((x*x)+(y*y)+(z*z));
float n1=sqrt(n);
cout<<"La norma del punto es es: ("<<n1<<")"<<endl;
}
void Punto::Negate(){
    int x1=x*-1;
    int y1=y*-1;
    int z1=z*-1;
    cout<<"El punto negativo es: ("<<x1<<","<<y1<<","<<z1<<")"<<endl;
}
void Punto::printData(){
cout<<"El punto es: ("<<x<<","<<y<<","<<z<<")"<<endl;
}



