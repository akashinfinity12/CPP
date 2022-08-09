#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  // Declaration of a pointer variable
  int *p = &a;
  // Accessing the value of the pointed address
  cout << *p << endl;
  // Outputting the address of pointed variable
  cout << p;
  return 0;
}
