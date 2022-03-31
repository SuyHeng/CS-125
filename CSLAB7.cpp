//Name: Heng Suy
//CS 125 Section 3

#include <iostream>
using namespace std;
int main ()
{
    char Menu;

mainmenu:
    cout << "MAIN MENU: Select Laboratory Activity" << endl;
    cout << "[1] Arithmetic Operators and Keyboard Inputs" << endl;
    cout << "[2] On Arithmetic Operators" << endl;
    cout << "[3] Check if Age is Even or Odd" << endl;
    cout << "[4] Check Temperature" << endl;
    cout << "[5] On Prime and Composite Number" << endl;
    cout << "[6] Exam Scores" << endl;
    cout << "[7] Switches" << endl;
    cout << "[X]" << endl;
    cout << "Your Choice: ";
    cin >> Menu;

    switch (toupper(Menu))
    {
        case '1':{
            int num1, num2, num3;
            int sum, avg, prod;

            cout << "Enter First Number: ";
            cin >> num1;
            cout << "Enter Second Number: ";
            cin >> num2;
            cout << "Enter Third Number: ";
            cin >> num3;
            
            sum = num1 + num2 + num3;
            prod = num1 * num2 * num3;
            avg = (num1 + num2 + num3) / 2;

            cout << "Sum of " << num1 << "," << num2 << "," << num3 << " is " << sum << endl;
            cout << "Product of " << num1 << "," << num2 << "," << num3 << " is " << prod << endl;
            cout << "Average of " << num1 << "," << num2 << "," << num3 << " is " << avg << endl;
        }
        break;

        case '2':
        {
            cout << "SELECT PROGRAMS: " << endl;
            cout << "[1] Circumfrences and Area" << endl;
            cout << "[2] Temperature Conversion" << endl;
            cout << "[X] Go back to Main Menu" << endl;
            cout << "Your Choice: ";
            cin >> Menu;
            
            switch (toupper(Menu))
            {
                case '1':
                {
                    int rad;
                    int area;
                    int circumfrence;
    
                    cout << "Enter radius: ";
                    cin >> rad;

                    area = (rad^2) * 3.14;
                    circumfrence = (2 * 3.14 * rad);

                    cout << "The area of the circle is " << area << "." << endl;
                    cout << "The circumfrence of the circle is " << circumfrence << "." << endl;

                }
                break;
                
                case '2': 
                {
                    double C;
                    double K;
                    double F;


                    cout << "Enter degrees in Celcius: ";
                    cin >> C;


                    K = C + 273;
                    F = (C * 1.8) + 32;

                    cout << "The value of " << C << " degree1s C in K is " << K << "." << endl;
                    cout << "The value of " << C << " degrees C in F is " << F << "." << endl;

                }
                break;

                case 'X':
                {
                    goto mainmenu;
                }
                break;
            }
        }
        break;
        
        case '3':
        {
            int age;
            string name;

    
            cout << "Age : ";
            cin >> age;
            cin.ignore();
            cout << "Name : ";
            getline(cin, name);

            if (age % 2 == 0)
            {
                for (int i = 0; i < 10; i++)
                {
                    cout << name << endl;
                }
            }
            else
            {
                for (int i = 0; i < 5; i++)
                {
                    cout << name << endl;
                }
            }
        }
        break;

        case '4':
        {
            int temp;

   
            cout << "Enter temperature: ";
            cin >> temp;

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
        }
        break;

        case '5':
        {
            int num;
            bool isPrime = true;

            cout << "Enter your number: ";
            cin >> num;

            if (num == 0 || num == 1)
            {
                isPrime = false;
            }

            for (int i = 2; i <= num / 2; i++)
            {
                if (num % 2 == 0)
                {
                    isPrime = false;
                    break;
                }
            }
    
            if (isPrime){
            cout << num << " is a Prime number." << endl;
            }
            else{
            cout << num << " is not a Prime number." << endl;
            }

        }
        break;

        case '6':
        {
            int gradeA = 0, gradeB = 0, gradeC = 0;
            int gradeD = 0, gradeF = 0;
            int n, count = 0;

            do {
                    cout << "Enter Exam Scores: ";
                    cin >> n;

                if (n >= 90 && n <= 100)
                    {
                        gradeA++;
                    }
                    else if (n >= 80 && n <= 89)
                    {
                        gradeB++;
                    }
                    else if (n >= 70 && n <= 79)
                    {
                        gradeC++;
                    }
                    else if (n >= 60 && n <= 69)
                    {
                        gradeD++;
                    }
                    else if (n >= 0 && n <= 59)
                    {
                        gradeF++;
                    }
                    count++;
                }
            while (n != -1);

                cout << "Number of A's: " << gradeA << endl; 
                cout << "Number of B's: " << gradeB << endl; 
                cout << "Number of C's: " << gradeC << endl; 
                cout << "Number of D's: " << gradeD << endl; 
                cout << "Number of F's: " << gradeF << endl; 
                cout << "Total Numbers: " << count << endl;  
        }
        break;

        case '7':
        {
            goto mainmenu;
        }
        break;


    }


}
