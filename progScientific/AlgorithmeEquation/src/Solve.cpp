#include "Solve.h"
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
    double slt = 0;
    double b = sltDroiteNewton(start);

    while(fabs(start-b) > EPS){
        start = b;
        b = sltDroiteNewton(start);
    }
    slt = (start + b)/2;

    return slt;
}
Solve::Solve()
{
    //ctor
}

Solve::~Solve()
{
    //dtor
}
