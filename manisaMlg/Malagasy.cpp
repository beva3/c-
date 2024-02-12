#include "Malagasy.hpp"

Malagasy::Malagasy(){}
Malagasy::~Malagasy(){}

string Malagasy::manisa(int nomerika){
    string soratraMalagasy;

    if(nomerika < 10 )
        soratraMalagasy = isa[nomerika];    
    else 
        soratraMalagasy = "";
    return soratraMalagasy;
}