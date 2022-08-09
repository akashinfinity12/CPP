#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int a, b;
  cout << "Enter first number 'a' = ";
  cin >> a;
  cout << "Enter second number 'b' = ";
  cin >> b;
  swap(&a, &b);
  cout << "Value of 'a' = " << a << endl;
  cout << "Value of 'b' = " << b;
  return 0;
}
