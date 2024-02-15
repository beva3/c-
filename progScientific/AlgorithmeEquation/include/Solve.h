#ifndef SOLVE_H
#define SOLVE_H

#define EPS 0.0000000000001
#include <cmath>

class Solve
{
    private:
        double sltDroiteNewton(double xStart);
        double pentF(double x);
        double penteAB(double a, double b);
        double interAbsDroite(double xCurent,double xFix);
        double slt = 0;
    public:
        Solve();
        virtual ~Solve();

        double f(double x);
        double newton(double start);
        double faussePosition(double xSatrt, double xEnd);
};

#endif // SOLVE_H
