#include <cmath>
#include <iostream>
using namespace std;

int main()
{

        double sum, product, dividend, number1, number2, square, square_root, cube, cube_root, power_result;
        int choice;




    do
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
        

        cin >> choice;
        while (choice > 9 || choice < 0)
        {
                cout << "You did not enter a valid choice, please try again" << endl;
                cin >> choice;
        }
        
        switch(choice) 
        {
            case 1: cout << "Enter any number" << endl;
                cin >> number1;

                cout << "You entered " << number1 << endl;

                //second input

                cout << "Enter the second number" << endl;
                cin >> number2;
                cout << "You entered " << number2 << endl;
                sum = number1 - number2;
        
                cout << "The result is " << sum << endl;

                break;

            case 0: 
                    exit(0);
            case 2:
            
                cout << "Enter any number" << endl;
                cin >> number1;

                cout << "You entered " << number1 << endl;

                //second input

                cout << "Enter the second number" << endl;
                cin >> number2;
                cout << "You entered " << number2 << endl;
                sum = number1 + number2;

                cout << "The result is " << sum << endl;

                break;
            

            case 3:
            
                cout << "Enter the first number" << endl;
                cin >> number1;
                cout << "You entered " << number1 << endl;

                //second input

                cout << "Enter the second number" << endl;
                cin >> number2;
                cout << "You entered " << number2 << endl;

                product = number1 * number2;
        
                cout << "The result is " << product << endl;

                break;

            case 4:
              cout << "Enter the first number" << endl;
              cin >> number1;
              cout << "You entered " << number1 << endl;

              //second input

              cout << "Enter the second number" << endl;
              cin >> number2;
              while (number2 == 0)
              {
                   cout << "You entered 0, that won't work for division. Please enter another number" << endl;
                   cin >> number2;
              }
              
              cout << "You entered " << number2 << endl;
                
              dividend = number1 / number2;  

              cout << "The result is " << dividend << endl;

              break;

            case 5: //square
                cout << "Enter the number you would like to square" << endl;

                cin >> number1;

                cout << "You entered " << number1 << endl;

                square = pow(number1,2);

                cout << "The result is " << square << endl;

            break;

            case 6: //square root

                cout << "Enter the number you would like the square root of" << endl;

                cin >> number1;

                cout << "You entered " << number1 << endl;

                square_root = sqrt (number1);

                cout << "The result is " << square_root << endl;

            break;

            case 7: //cube
                cout << "Enter the number you would like the cube of" << endl;

                cin >> number1;

                cout << "You entered " << number1 << endl;

                cube = pow(number1,3);

                cout << "The result is " << cube << endl;

            break;

            case 8: //cube root
                cout << "Enter the number you would like the cube root of" << endl;

                cin >> number1;

                cout << "You entered " << number1 << endl;

                cube_root = cbrt (number1);

                cout << "The result is " << cube_root << endl;

            break;

            case 9: //power
                cout << "Enter the base and then enter the power" << endl;

                cin >> number1;

                cout << "The base is " << number1 << ". Please enter the power" << endl;

                cin >> number2;

                power_result = pow(number1,number2);

                cout << "The power is " << number2 << ". The result is " << power_result << endl;
            break;

        default:
            cout << "Invalid input" << endl;

        }

    }while (choice >0 && choice <10);
}        
        