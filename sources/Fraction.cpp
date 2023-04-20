#include <iostream>
#include <fstream> 
#include <sstream>
#include <stdexcept>
using namespace std;
#include "Fraction.hpp"
namespace ariel{


Fraction :: Fraction(int a, int b){
    this-> Numerator = a;
    this-> Denominator = b;
}

Fraction :: Fraction(double c){

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
double Fraction:: operator+(double d){
    return 1.1;
}

double Fraction:: operator-(double d){
    return 1.1;
}

double Fraction:: operator*(double d){
    return 1.1;
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

Fraction Fraction:: operator++(int a){
    return Fraction(1,2);
}

Fraction Fraction:: operator--(){
    return Fraction(1,2);
}

Fraction Fraction:: operator--(int a){
    return Fraction(1,2);
}

std::ostream& operator<< (std::ostream& output, const Fraction& c){
    return output;
}
std::istream& operator>> (std::istream& input , Fraction& c){
    return input;
}

Fraction Fraction:: operator*(const float other){
    return Fraction(1,2);
}

double operator+(double number, Fraction& f ){
    return 1.1;
}
double operator-(double number,  Fraction& f){
    return 1.1;
}
double operator*(double number,  Fraction& f){
    return 1.1;
}
double operator/(double number,  Fraction& f){
    return 1.1;
}


}