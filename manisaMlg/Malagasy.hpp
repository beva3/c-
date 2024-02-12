#ifndef __MALAGASY__
#define __MALAGASY__

#include "myLyb.hpp"

class Malagasy{
private :
    vector <string> isa = {
        "ray",
        "roa",
        "telo",
        "efatra",
        "dimy",
        "enina",
        "fito",
        "valo",
        "sivy"
    }; 
public:
    
    Malagasy();
    ~Malagasy();
    string manisa(int nomerika);
};


#endif // !__MANISA__