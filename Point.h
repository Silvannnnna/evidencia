//
// Created by Silvanna Farias on 24/11/23.
//
#ifndef Punto_h
#define Punto_h

#include <stdio.h>
#include <string>
#include <math.h>

class Punto {
private:
    double x,y;
public:
    Punto();
    Punto(double _x, double _y);

    double getX();
    double getY();

    void setX(double _x);
    void setY(double _y);

    double calculaDistancia(Punto p2);
    std::string str();

};


#endif //Punto_h
