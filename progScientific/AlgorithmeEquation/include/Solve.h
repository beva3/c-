#ifndef SOLVE_H
#define SOLVE_H

#define EPS 0.0000000000001
#include <cmath>

class Solve
{
    private:
        double sltDroiteNewton(double xStart);

    public:
        Solve();
        virtual ~Solve();
        double f(double x);
        double pentF(double x);
        double newton(double start);
};

#endif // SOLVE_H
