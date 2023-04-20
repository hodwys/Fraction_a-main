#ifndef FRACTION

#include <iostream>
#include <fstream> 
#include <sstream>
#include <stdexcept>
using namespace std;
using namespace ariel;

class Fraction{
    private:

        int Numerator
        int Denominator

    public:

    Fraction();

    Fraction(int a, int b);

    int Get_Numerator();
    int Get_Denominator();
    void Set_Numerator();
    void Set_Denominator();



Fraction operator+(const Fraction& other);

Fraction operator-(const Fraction& c1, const Fraction& c2);

Fraction operator*(const Fraction& c1, const Fraction& c2);

Fraction operator/(const Fraction& c1, const Fraction& c2);

































    Fraction operator+(double number) ;
    Fraction operator-(double number)  ;
    Fraction operator*(double number)  ;
    Fraction operator/(double number)  ;

  



    
}










#endif