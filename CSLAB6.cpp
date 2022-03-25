#include <iostream>
using namespace std;
int main()
{
    int gradeA, gradeB, gradeC;
    int gradeD, gradeF;
    int num, count;

    cout << "Enter Exam Scores: ";
    cin >> num;
    do {
        if (num >= 90 && num <= 100)
            {
                gradeA++;
            }
            else if (num >= 80 && num <= 89)
            {
                gradeB++;
            }
            else if (num >= 70 && num <= 79)
            {
                gradeC++;
            }
            else if (num >= 60 && num <= 69)
            {
                gradeD++;
            }
            else if (num >= 0 && num <= 59)
            {
                gradeF++;
            }
            count++
    }
    while (num != -1);
    {
        cin >> num;
    }

        cout << "Number of A's: " << gradeA << endl; 
        cout << "Number of B's: " << gradeB << endl; 
        cout << "Number of C's: " << gradeC << endl; 
        cout << "Number of D's: " << gradeD << endl; 
        cout << "Number of F's: " << gradeF << endl; 
        cout << "Total Numbers: " << count << endl;  
        
        return 0;
}