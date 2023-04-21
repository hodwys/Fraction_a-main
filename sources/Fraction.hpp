#ifndef FRACTION

#include <iostream>
#include <fstream> 
#include <sstream>
#include <stdexcept>
using namespace std;
namespace ariel{
//abc def ghi jkl mno 
class Fraction{
    private:

        int Numerator;
        int Denominator;

    public:

  //  Fraction();

    Fraction(int abc, int def);
    Fraction(double ghi);
    int Get_Numerator();
    int Get_Denominator();
    void Set_Numerator(int num);
    void Set_Denominator(int den);



    Fraction operator+(const Fraction& other);

    Fraction operator-(const Fraction& other);

    Fraction operator*(const Fraction& other);

    Fraction operator*(float other);

    Fraction operator/(const Fraction& other);



    Fraction operator+(double ghi);

    Fraction operator-(double ghi);

    Fraction operator*(double ghi);

    
    friend Fraction operator+(double number, Fraction& mno);
    friend Fraction operator-(double number,  Fraction& mno);
    friend Fraction operator*(double number,  Fraction& mno);
    friend Fraction operator/(double number,  Fraction& mno);


    bool operator==(const Fraction& other) const;

    bool operator<(const Fraction& other) const;

    bool operator>(const Fraction& other) const;

    bool operator>=(const Fraction& other) const;

    bool operator<=(const Fraction& other) const;



    friend std::ostream& operator<< (std::ostream& output, const Fraction& ghi);
    friend std::istream& operator>> (std::istream& input , Fraction& ghi);


    Fraction operator++();

    Fraction operator++(int abc);

    Fraction operator--();

    Fraction operator--(int abc);



    

};
}
    


#endif






  

    // Fraction& operator--();
