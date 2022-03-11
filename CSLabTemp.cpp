#include <iostream>
using namespace std;
int main()

{
    //variables
    int temp;

    //user input
    cout << "Enter temperature: ";
    cin >> temp;

    //caculate user input to display the output
    if (temp > 40 and temp <= 54)
    {
        cout << "Stay Hydrated!" << endl;
    }
    else if (temp > 31 and temp <= 40)
    {
        cout << "Stay Cool and hydrated!" << endl;
    }
    else if (temp > 25 and temp <= 32)
    {
        cout << "Keep a sunblock handy!" << endl;
    }
    else if (temp > 19 and temp <= 25)
    {
        cout << "Always keep your cool!" << endl;
    }
    else 
    {
        cout << "Cool breeze in the air!" << endl;
    }

    return 0;
}