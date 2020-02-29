#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    private:
        float x;
        float y;
        float z;


    public:
        Punto(float x_coord, float y_coord, float z_coord);
        Punto();

        void asignarX (float x_coord);
        float obtenerX()const;
        void asignarY (float y_coord);
        float obtenerY()const;

        void asignarZ (float z_coord);
        float obtenerZ()const;

        void printData();
        void Negate();

        void Norm();

};

#endif // PUNTO_H
