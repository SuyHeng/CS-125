#include <iostream>
using namespace std;
int main()
{
    int num, high, low;
    int a[20], narray=0;
    double avg;

    //ask for user input
    //if input is -1, break;
    cout << "Enter the Number: ";
    for (int i=0; i<20; ++i)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        //assign the input number to the array
        //increment number of array (narray) to use later in caculating average
        a[i] = num;
        narray++;
    }
    
    //assign high and low to the first index of the array
    high = low = a[0];
    //calculate the highest and lowest number
    for (int i=0; i<narray; ++i)
    {
        if (high < a[i])
        high = a[i];
        if (low > a[i])
        low = a[i];
    }

    //find total sum of input number
    for (int i=0; i<narray; ++i)
    {
        avg += a[i];
    }
    //find average of the input number
    avg /= narray;

    cout << "The Highest number in array: " << high << endl;
    cout << "The Lowest number in array: " << low << endl;
    cout << "The average number in array: " << avg << endl;

    return 0;
}