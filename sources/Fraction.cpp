#include <iostream>
#include <fstream> 
#include <sstream>
#include <stdexcept>
using namespace std;
#include "Fraction.hpp"
namespace ariel{


Fraction :: Fraction(int abc, int def){
    this-> Numerator = abc;
    this-> Denominator = def;
}

Fraction :: Fraction(double ){

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
    this->Denominator = den;
}


Fraction Fraction::operator+(const Fraction& other){
    return Fraction(1,2);
}


Fraction Fraction:: operator-(const Fraction& other){
    return Fraction(1,2);
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