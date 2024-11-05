#include <iostream>
#include <limits> // std::numeric_limits

using namespace std;



int main()
{
    
    double number1, number2, result;
    char operation;
    int choice;
    
    cout << "******************************" << endl;
    cout << "\n";
    cout << "*CALCULATOR*" << endl;
    cout << "\n";
    cout << "Use + to addition" << endl;
    cout << "Use - to subtraction" << endl;
    cout << "Use * to multiplication" << endl;
    cout << "Use / to division" << endl;
    cout << "\n";

    cout << "******************************" << endl;
    cout << "\n";
    
    do
    {
        cout << "Enter a operation: ";
        cin >> operation;

        cout << "Enter the first number: ";
        cin >> number1;


        cout << "Enter the second number: ";
        cin >> number2;



        switch (operation)
        {
        case '+':
            result = number1 + number2;
            cout << number1 << " + " << number2 << ": " << result << endl; break;

        case '-':
            result = number1 - number2;
            cout << number1 << " - " << number2 << ": " << result << endl; break;

        case '*':
            result = number1 * number2;
            cout << number1 << " * " << number2 << ": " << result << endl; break;

        case '/':
            if (number2 != 0)
            {
                result = number1 / number2;
                cout << number1 << " / " << number2 << ": " << result << endl; break;
            }

            else 
            {
                cout << "Error! : Division by zero!" << endl;
            }
            break;
       
        default:
            cout << "Error: Invalid operation!" << endl;
            break;
        
        
        }

        // Input control for selection received from user
        cout << "\nDo you want to perform another calculation? (1 for Yes, 0 for No): ";
        cin >> choice;
        cout << endl;

    } while (choice == 1); 


        


    return 0;
}