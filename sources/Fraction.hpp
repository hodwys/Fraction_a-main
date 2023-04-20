#ifndef FRACTION

#include <iostream>
#include <fstream> 
#include <sstream>
#include <stdexcept>
using namespace std;
namespace ariel{

class Fraction{
    private:

        int Numerator;
        int Denominator;

    public:

  //  Fraction();

    Fraction(int a, int b);
    Fraction(double c);
    int Get_Numerator();
    int Get_Denominator();
    void Set_Numerator(int num);
    void Set_Denominator(int den);



    Fraction operator+(const Fraction& other);

    Fraction operator-(const Fraction& other);

    Fraction operator*(const Fraction& other);

    Fraction operator*(const float other);

    Fraction operator/(const Fraction& other);



    double operator+(double d);

    double operator-(double d);

    double operator*(double d);

    
    friend double operator+(double number, Fraction& f );
    friend double operator-(double number,  Fraction& f);
    friend double operator*(double number,  Fraction& f);
    friend double operator/(double number,  Fraction& f);


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



    

};
}
    


#endif






  

    // Fraction& operator--();
