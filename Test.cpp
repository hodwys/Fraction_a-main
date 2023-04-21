#include "doctest.h"
#include <iostream>
#include "Fraction.hpp"
using namespace ariel;
using namespace std;

TEST_CASE("Get and Set"){
    Fraction x(7,8);
    CHECK(x.Get_Numerator() == 7);
    CHECK(x.Get_Denominator() == 8);
    x.Set_Denominator(9);
    
    CHECK(x.Get_Denominator() == 9);
    x.Set_Numerator(10);
    CHECK(x.Get_Numerator() == 10);

}

TEST_CASE("/0"){

    Fraction x(7,8);
    CHECK_THROWS(x.Set_Denominator(0));
    CHECK_THROWS(Fraction(1,0));
}


TEST_CASE("Test + "){
    Fraction x(7,8);
    Fraction y(3,1);
    Fraction z = x+y;
    CHECK(z.Get_Numerator() == 10);    
    CHECK(z.Get_Denominator() == 9);
    CHECK(z == 1.111);
    
}


TEST_CASE("Test - "){
    Fraction x(7,8);
    Fraction y(3,1);
    Fraction z = x-y;
    CHECK(z.Get_Numerator() == 4);    
    CHECK(z.Get_Denominator() == 7);
    CHECK(z == 0.571);
}

TEST_CASE("Test / "){
    Fraction x(7,8);
    Fraction y(3,1);
    Fraction z = x/y;
    CHECK(z == 0.291);
}

TEST_CASE("Test * "){
    Fraction x(7,8);
    Fraction y(3,1);
    Fraction z = x*y;
    CHECK(z == 2.625);
}

TEST_CASE("Test ++ "){
//2
    Fraction x(7,8);
    Fraction t(2,3);

    Fraction y = x++;
    Fraction z = ++t;


    CHECK(y == 0.875);
    CHECK(t == 1.666 );

}

TEST_CASE("Test -- "){
    Fraction x(16,8);
    Fraction t(6,3);

    Fraction y = x--;
    Fraction z = --t;

    CHECK(y == 2.0);
    CHECK(t == 1.0 );


}



TEST_CASE("Test >,<,>=,<="){
    Fraction x(1,1);
    Fraction y(2,4);
    CHECK(x > y);
    Fraction t(7,8);
    Fraction u(7,8);
    CHECK(x == y);
    CHECK(x >= y);
    CHECK(x <= y);
    Fraction w(1,8);
    CHECK( w < y);

}

