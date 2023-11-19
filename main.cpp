#include <iostream>
#include <stdbool.h>
#include <addition.h>
#include <subtraction.h>
#include <multiplication.h>
#include <devision.h>
using namespace std;

int main()
{
  int c;
  bool isend = 0;
  cout << "Choose the operation:\n1. addition\n2. subtraction\n3. multiplication\n4.division\n5. exit\n";
  do
  {
  cin >> c;
  switch(c)
    {
    case 1:
      {
        cout << "Feature in development!\n";
        break;
      };
    case 2:
      {
        cout << "Feature in development!\n";
        break;
      };
    case 3:
      {
        cout << "Feature in development!\n";
        break;
      };
    case 4:
      {
        cout << "Feature in development!\n";
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

