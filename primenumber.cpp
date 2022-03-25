#include <iostream>
using namespace std;
int main()

{
    int num;
    bool isPrime = true;

    cout << "Enter your number: ";
    cin >> num;

    //Since 0 and 1 are not prime numbers
    if (num == 0 || num == 1)
    {
        isPrime = false;
    }

    //Calculate for prime numbers
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % 2 == 0)
        {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime)
    cout << num << " is a Prime number." << endl;
    else
    cout << num << " is not a Prime number." << endl;

    return 0;
}