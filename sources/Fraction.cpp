#include <iostream>
#include <fstream> 
#include <sstream>
#include <stdexcept>
using namespace std;
#include "Fraction.hpp"
namespace ariel{

// 240999
Fraction :: Fraction(int abc, int def){
    if(def == 0){
        throw std ::invalid_argument ("Division_by_0");
    }
    this-> Numerator = abc;
    this-> Denominator = def;
}

Fraction :: Fraction(double def){

}


//Fraction();

int Fraction::Get_Numerator(){
    return this-> Numerator;
}

int Fraction:: Get_Denominator(){
        return this-> Denominator;
}

void Fraction:: Set_Numerator(int num){
    this->Numerator = num;
}

void Fraction:: Set_Denominator(int den){
     if(den == 0){
        throw std :: invalid_argument("Division_by_0");
     }
    this->Denominator = den;
}


Fraction Fraction::operator+(Fraction& other){

    Fraction temp(0,1); 
    int den = (this->Denominator * other.Get_Denominator());
    int num = ((this->Numerator * other.Get_Denominator()) + (this->Denominator * other.Get_Numerator()));
    int gcd = std::__gcd((num) , (den) );
    temp.Set_Numerator(num / gcd);
    temp.Set_Denominator(den / gcd);
    return temp;

}


Fraction Fraction:: operator-(const Fraction& other){
     Fraction temp(0,1); 
    // int den = (this->Denominator * other.Get_Denominator());
    // int num = ((this->Numerator * other.Get_Denominator()) - (this->Denominator * other.Get_Numerator()));
    // int gcd = std::__gcd((num) , (den) );
    // temp.Set_Numerator(num / gcd);
    // temp.Set_Denominator(den / gcd);
    return temp;
}

Fraction Fraction:: operator*(const Fraction& other){
    return Fraction(1,2);
}

Fraction Fraction:: operator/(const Fraction& other){
    return Fraction(1,2);
}
Fraction Fraction:: operator+(double jkl){
    return Fraction(1,2);
}

Fraction Fraction:: operator-(double jkl){
    return Fraction(1,2);
}

Fraction Fraction:: operator*(double jkl){
    return Fraction(1,2);
}


bool Fraction:: operator==(const Fraction& other) const{
    return true;
}

bool Fraction:: operator<(const Fraction& other) const{
    return true;
}

bool Fraction:: operator>(const Fraction& other) const{
    return true;
}

bool Fraction:: operator>=(const Fraction& other) const{
    return true;
}

bool Fraction:: operator<=(const Fraction& other) const{
    return true;
}

Fraction Fraction:: operator++(){
    return Fraction(1,2);
}

Fraction Fraction:: operator++(int abc){
    return Fraction(1,2);
}

Fraction Fraction:: operator--(){
    return Fraction(1,2);
}

Fraction Fraction:: operator--(int abc){
    return Fraction(1,2);
}

std::ostream& operator<< (std::ostream& output, const Fraction& ghi){
    return output;
}
std::istream& operator>> (std::istream& input , Fraction& ghi){
    return input;
}

Fraction Fraction:: operator*(const float other){
    return Fraction(1,2);
}

Fraction operator+(double number, Fraction& mno){
    return Fraction(1,2);
}
Fraction operator-(double number,  Fraction& mno){
    return Fraction(1,2);
}
Fraction operator*(double number,  Fraction& mno){
    return Fraction(1,2);
}
Fraction operator/(double number,  Fraction& mno){
    return Fraction(1,2);
}


}