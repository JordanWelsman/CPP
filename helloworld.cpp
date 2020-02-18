#include <iostream>
using namespace std;

int main()
{
  int number = 21;
  int enteredNumber;

  cout << "\nEnter a number to add to 21\n";
  cin >> enteredNumber;

  number = number + enteredNumber;

  cout << number;

  return 0;
}
