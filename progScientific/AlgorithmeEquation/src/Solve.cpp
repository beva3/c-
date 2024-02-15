#include "../include/Solve.h"
double Solve::f(double x){
    return log(x) - 1;
}
double Solve::pentF(double x){
    return (f(x + EPS)-f(x))/EPS;
}
double Solve::sltDroiteNewton(double xStart){
    return xStart - f(xStart)/pentF(xStart);
}

double Solve::newton(double start){
    double b = sltDroiteNewton(start);

    while(fabs(start-b) > EPS){
        start = b;
        b = sltDroiteNewton(start);
    }
    slt = (start + b)/2;

    return slt;
}

double Solve::faussePosition(double xSatrt, double xEnd){
    double xO = xSatrt;
    double x1 = interAbsDroite(xO,xEnd);

    while(fabs(x1 - xO) > EPS){
        xO = x1;
        x1 = interAbsDroite(xO,xEnd);
    }
    slt = (xO + x1)/2;
    return slt;
}

double Solve::penteAB(double a, double b){
    return (f(b) - f(a))/(b-a);
}
double Solve::interAbsDroite(double xCurent,double xFix){
    return xCurent - f(xCurent)/penteAB(xCurent,xFix);
}
Solve::Solve()
{
    //ctor
}

Solve::~Solve()
{
    //dtor
}
