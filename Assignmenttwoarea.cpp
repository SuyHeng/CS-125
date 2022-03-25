//Name: Heng Suy
//CS 125 Section 3
//Lab Assignment 2

#include <iostream>
using namespace std;
int main()
{
    //variables
    double n1;
    double n2;
    double n3;
    
    //input
    cout << "Enter Radius: " ;
    cin >> n1;

    //calculate input
    n2 = 3.14 * (n1 * n1);
    n3 = 2 * 3.14 * n1;

    //output
    cout << "The area of the circle is " << n2 << "." << endl;
    cout << "The circumfrence of the cirlce is " << n3 << "." << endl;

    return 0;

}
