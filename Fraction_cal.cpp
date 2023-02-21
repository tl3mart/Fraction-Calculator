/*
  Name:Thomas Martinez.p Date: Nov 18th, 2022. SYDE 121.

    Lab room: DC 1350
 */
/*
Purpose: Program gets numerator and denominator from user for 2 fractions. Input is 
then put into class Fraction, where addition, subtraction, multiplication and division is found and outputed.
 
 */
#include <iostream>
#include <string>
using namespace std;

void get_fractions (int&a, int&b, int&c, int&d);

class Fraction
{
public:
int denominator;
int numerator;
Fraction (){
    numerator = 0;
    denominator = 1;

}

Fraction (int num){

    numerator = num;
    denominator = 1;

}

Fraction (int num, int deno){

    numerator = num;
    denominator = deno;
    
}

Fraction add (Fraction fraction){

int addition_numerator = denominator * fraction.numerator + numerator * fraction.denominator;
int addition_denominator = denominator * fraction.denominator;
Fraction sum = Fraction(addition_numerator, addition_denominator);

return (sum);

}
Fraction subtract (Fraction fraction){

int subtract_numerator =  numerator * fraction.denominator - denominator * fraction.numerator;
int subtract_deonminator = denominator * fraction.denominator;

Fraction subtract = Fraction (subtract_numerator, subtract_deonminator );

return (subtract);
}

Fraction multiplication (Fraction fraction){

int mult_numerator = numerator * fraction.numerator;
int mult_deominator = denominator * fraction.denominator;

Fraction multiplication = Fraction (mult_numerator, mult_deominator);
return (multiplication);
}


Fraction divide (Fraction fraction){
int div_numerator = numerator * fraction.denominator;
int div_deonminator =  fraction.numerator * denominator;

Fraction divide = Fraction (div_numerator, div_deonminator);
return (divide);
}



};

int main (){
    int a, b, c, d;

get_fractions(a, b, c, d);

Fraction first_fraction = Fraction(a,b);
Fraction secound_fraction = Fraction(c,d);


Fraction sum = first_fraction.add(secound_fraction);
Fraction subtract = first_fraction.subtract(secound_fraction);
Fraction multiplication = first_fraction.multiplication(secound_fraction);
Fraction divide = first_fraction.divide(secound_fraction);

cout << "The sum is " << sum.numerator<< "/" << sum.denominator << "\n";
cout << "The difference is " << subtract.numerator << "/" << subtract.denominator <<"\n";
cout << "The product is " << multiplication.numerator << "/" << multiplication.denominator << "\n";
cout << "The quotient is " << divide.numerator << "/" << divide.denominator << "\n";


    return 0;
}


void get_fractions (int&a, int&b, int&c, int&d)
{
    string awnser;

    //getting first fraction
    cout << "Is your fraction non-zero? (Yes or No)\n";
    cin >> awnser;
    if ( awnser == "Yes" || awnser == "yes"){
        cout << "Is the fraction a integer? (Yes or No)\n";
        cin >> awnser;
        if ( awnser == "No" || awnser == "no"){
    cout << "Please enter the numerator for the first fraction:\n";
    cin >> a;
    cout << "Please enter the deominator for the first fraction:\n";
    cin >> b;
    }
        else {
            cout << "What is the integer?\n";
            cin >> a;
            b = 1;
        }
    }
    else {
        a = 0;
        b=1;
    }
    //getting secound fraction
    cout << "Is your secound fraction non-zero? (Yes or No)\n";
    cin >> awnser;
    if ( awnser == "Yes" || awnser == "yes"){
        cout << "Is the fraction a integer? (Yes or No)\n";
        cin >> awnser;
        if ( awnser == "No" || awnser == "no"){
    cout << "Please enter the numerator for the secound fraction:\n";
    cin >> c;
    cout << "Please enter the deominator for the secound fraction:\n";
    cin >> d;
    }
        else {
            cout << "What is the integer?\n";

            cin >> c;
            d=1;
        }
    
}
else {
     c= 0;
        d=1;
}
}

    