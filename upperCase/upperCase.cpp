#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

const int ARRAYSIZE = 100;

int main()
{
  char str[ARRAYSIZE] = "Hello, this is a test message.";
  char c;

  cout << "\nPlease write a lower-case sentence to capitalise:\n";
  cin >> (char std[]);

  for (int i = 0; i < ARRAYSIZE; i++)
  {
    c = str[i];
    putchar (toupper(c));
  }

  //cout << str[];

  return 0;
}
