#include<iostream>

using namespace std;

int main(){

    double num1;
    char op;
    double num2;
    double result;

    cout << "Calculator \n";
    
    cout << "Type number 1: \n";
    cin >> num1;

        cout << "Choose an operator (+ - * /) \n";
    cin >> op;
    
    cout << "Type number 2: \n";
    cin >> num2;

    switch (op)
    {
        case '+':
            cout << "Result: " << num1 + num2 << "\n";
            break;
        case '-':
            cout << "Result: " << num1 - num2 << "\n";
            break;
        case '*':
            cout << "Result: " << num1 * num2 << "\n";
            break;
        case '/':
            cout << "Result: " << num1 / num2 << "\n";
            break;
    }

    system("pause");
    return 0;
}