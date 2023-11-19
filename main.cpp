#include <iostream>
#include <stdbool.h>
#include <addition.h>
#include <subtraction.h>
#include <multiplication.h>
#include <devision.h>
using namespace std;

int main()
{
  int a, b, c;
  bool isend = 0;
  cout << "Choose the operation:\n1. addition\n2. subtraction\n3. multiplication\n4.division\n5. exit\n";
  do
  {
  cin >> c;
  switch(c)
    {
    case 1:
      {
        cout << "Enter first number\n";
        cin >> a;
        cout << "Enter second number\n";
        cin >> b;
        cout << "Result: " << addition(a, b);
        cout << "Choose the operation:\n1. addition\n2. subtraction\n3. multiplication\n4.division\n5. exit\n";
        break;
      };
    case 2:
      {
        cout << "Enter first number\n";
        cin >> a;
        cout << "Enter second number\n";
        cin >> b;
        cout << "Result: " << subtraction(a, b);
        cout << "Choose the operation:\n1. addition\n2. subtraction\n3. multiplication\n4.division\n5. exit\n";
        break;
      };
    case 3:
      {
        cout << "Enter first number\n";
        cin >> a;
        cout << "Enter second number\n";
        cin >> b;
        cout << "Result of multiplication: " << multiplication(a, b);
        cout << "\nChoose the operation:\n1. addition\n2. subtraction\n3. multiplication\n4.division\n5. exit\n";
        break;
      };
    case 4:
      {
        cout << "Enter first number\n";
        cin >> a;
        cout << "Enter second number\n";
        cin >> b;
        cout << "Result of division: " << devision(a, b);
        cout << "\nChoose the operation:\n1. addition\n2. subtraction\n3. multiplication\n4.division\n5. exit\n";
        break;
      };
     case 5:
      {
        isend = 1;
        break;
      }
     default:
      {
        cout <<"Unknown command, please rewrite\n";
        break;
      }
    }
}while(!isend);
  system("pause");
  return 0;
}

