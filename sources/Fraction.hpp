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



Fraction operator+(const Fraction& other) const;

Fraction operator-(const Fraction& other) const;

Fraction operator*(const Fraction& other) const;

Fraction operator/(const Fraction& other) const;

bool operator==(const Fraction& other) const;

bool operator<(const Fraction& other) const;

bool operator>(const Fraction& other) const;

bool operator>=(const Fraction& other) const;

bool operator<=(const Fraction& other) const;



friend std::ostream& operator<< (std::ostream& output, const Fraction& c);
friend std::istream& operator>> (std::istream& input , Fraction& c);





Fraction operator++();

Fraction operator++(int a);

Fraction operator--();

Fraction operator--(int a);





































    Fraction operator+(double number) ;
    Fraction operator-(double number)  ;
    Fraction operator*(double number)  ;
    Fraction operator/(double number)  ;

  



    
}










#endif