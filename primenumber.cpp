#include <iostream>
using namespace std;
int main()

{
    int num, i, f;
    bool isPrime = true;
    
    cout << "Enter your number: ";
    cin >> num;

    //check if number is 0 or 1, since 0 or 1 is neither composite nor prime
    if (num == 0 || num == 1)
    {
        isPrime = false;
    }

    //check if the number is a prime number
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
    cout << num << " is a Composite number." << endl;
    cout << "Factors of " << num << " are: " ;
    //check for factors if number is a composite number
    for (f = 1; f <= num; f++)
    {
        if (num % f == 0)
        cout << f << " ";
    }
    return 0;
}
