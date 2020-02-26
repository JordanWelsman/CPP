#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int minBarrier, maxBarrier;

int takeBoundaries()
{
  // set mimium generation value
  cout << "\nPlease enter the MINIMUM value of the number you would like to generate.\n";
  cin >> minBarrier;

  // set maximum generation value
  cout << "\nPlease enter the MAXIMUM value of the number you would like to generate.\n";
  cin >> maxBarrier;

  return 0;
}

int main()
{
  // initialise random number variable
  int randomNumber;

  // run boundary input function
  takeBoundaries();

  // initialise seed
  srand(time(NULL));

  // generate random number
  randomNumber = rand() % maxBarrier + minBarrier;

  // print boundaries & random number to console
  cout << "\nGenerating random number between " << minBarrier << " and " << maxBarrier << "\n";
  cout << "Your random number is " << randomNumber;

  return 0;
}
