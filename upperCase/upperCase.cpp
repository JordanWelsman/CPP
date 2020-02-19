#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main()
{
  char str[] = "Test";
  char c;
  int i = 0;

  cout << "Please write a lower-case sentence to capitalise:";
  cin >> str[];

  while (str[i])
  {
    c = str[i];
    putchar (toupper(c));
    i++;
  }

  return 0;
}
