# include <iostream>
using namespace std;

int main() 
{

  char operation;
  float num1, num2;

  cout << "Enter operator: +, -, x, /: ";
  cin >> operation;
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  
  // could replace lines 14-15 by revising line 12-13
  // cout << "Enter two numbers: ";
  // cin >> num1 >> num2;

  switch(operation) 
  {
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case 'x':
      cout << num1 << " x " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Not valid operation. Please try again.";
      break;
  }

  return 0;
}
