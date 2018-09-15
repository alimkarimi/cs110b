#include <cmath>
#include <iostream>
using namespace std;


//function prototype
void displayMenu();
double add();
double askForInput();
double subract();
double multiply(double, double);
double divide(double, double);
double square();
double square_root();
double cube_root();
double cube();
double power(double, double);

int main()
{

    double number1, number2;
    int choice;

    do
    {
        
        displayMenu();
        
        cin >> choice;
        while (choice > 9 || choice < 0)
        {
                cout << "You did not enter a valid choice, please try again" << endl;
                cin >> choice;
        }
        
        switch(choice) 
        {
            case 0:
                exit(0);

            case 1: 
                                        
                cout << add() << endl;
               
                break;

            case 2:
            
                cout << subract() << endl;

                break;
            

            case 3:
            
                //using different kind of function - pass by value instead    
                number1 = askForInput();
                number2 = askForInput();

                
                multiply(number1, number2);

                cout << "The result is " << multiply(number1, number2) << endl;

                break;

            case 4:
                number1 = askForInput();
                number2 = askForInput();
                while (number2 == 0)
                  {
                       cout << "You entered 0, that won't work for division. Please enter another number" << endl;
                       number2 = askForInput();
                  }
                    
                divide(number1, number2);

                cout << "The result is " << divide(number1, number2) << endl;

                break;

            case 5: //square
                
                cout << square() << endl;

            break;

            case 6: //square root

                cout << square_root() << endl;

            break;

            case 7: //cube
                
                cout << cube() << endl;

            break;

            case 8: //cube root
                cout << cube_root() << endl;

            break;

            case 9: //power
                cout << "Enter the base first, then the exponent" << endl;
                number1 = askForInput();
                number2 = askForInput();

                cout << "The result is " << power(number1, number2) << endl;

            break;

        default:
            cout << "Invalid input" << endl;

        }

    }while (choice >0 && choice <10);
} 

void displayMenu()
{
    cout << "1 Add" << endl;
    cout << "2 Subtract " << endl;
    cout << "3 Multiply" << endl;
    cout << "4 Divide" << endl;
    cout << "5. Square" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Cube" << endl;
    cout << "8. Cube Root" << endl;
    cout << "9. Power" << endl;
    cout << "0. Exit" << endl;
    cout << "Please enter a number" << endl;
}       

double add()
{
    double sum;
    double num1 = askForInput();
    double num2 = askForInput();
    sum = num1 + num2;
    return sum;
}

double subract()
{
   double sum;
   double num1 = askForInput();
   double num2 = askForInput();
   sum = num1 - num2;
   return sum; 
}

double multiply(double num1, double num2)
{
    double prod = num1 * num2;
    return prod;
}

double divide(double num1, double num2)
{
    double dividend = num1/num2;
    return dividend;
}

double square()
{
    double square;
    double num1 = askForInput();
    square = num1 * num1;
    return square;

}

double square_root()
{
    double num1 = askForInput();
    double square_root = sqrt(num1);
    return square_root;
}

double cube()
{
    double num = askForInput();
    double cube = pow(num, 3);
    return cube;
}

double cube_root()
{
    double num = askForInput();
    double cube_root = cbrt(num);
    return cube_root;
}

double power(double base, double exponent)
{
    double result = pow(base, exponent);
    return result;
}

double askForInput()
{
    double number;
    cout << "Enter any number" << endl;
    cin >> number;
    cout << "You entered " << number << endl;
    return number;
}
        