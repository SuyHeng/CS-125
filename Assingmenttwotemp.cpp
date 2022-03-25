//Name: HengSuy
//CS 125 Section 3
//Lab Assignment 2 (Temperature)

#include <iostream>
using namespace std;
int main()
{

//variable
double C;
double K;
double F;

//input
cout << "Enter degrees in Celcius: ";
cin >> C;

//calculate the input
K = C + 273;
F = (C * 1.8) + 32;

//Output
cout << "The value of " << C << " degree1s C in K is " << K << "." << endl;
cout << "The value of " << C << " degrees C in F is " << F << "." << endl;
return 0;
}