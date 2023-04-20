#include <iostream>
#include <fstream> 
#include <sstream>
#include <stdexcept>
using namespace std;
#include "sources/Fraction.hpp"
using namespace ariel;




Fraction(int a, int b){
    this-> Numerator = a;
    this-> Denominator = b;
}

Fraction();

int Fraction::Get_Numerator(){
    return this-> Numerator;
}

int Fraction:: Get_Denominator(){
        return this-> Denominator;
}

void Set_Numerator(int num){
    this->Numerator = num;
}

void Set_Denominator(int den){
    this->Denominator = den;
}
