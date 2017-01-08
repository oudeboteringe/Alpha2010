// Alpha2010.cpp : Defines the entry point for the console application.
// Description:
// Given a table A of N integers from 0 to N-1 calculate the smallest such index P,
// that that {A[0],...,A[N-1]} = {A[0],...,A[P]}.

#include "stdafx.h"

#include <conio.h>
#include <iostream>
using namespace std;

#include "Solution.h"

int main()
{

  // Declare the vector:
  vector<int> intVec;

  intVec.push_back(-1);
  intVec.push_back(3);
  intVec.push_back(-4);
  intVec.push_back(5);
  intVec.push_back(1);
  intVec.push_back(-6);
  intVec.push_back(2);
  intVec.push_back(1);
  intVec.push_back(1);
  intVec.push_back(-6);

  int result = solution(intVec);
  cout << "Result: " << result << endl;

  // End of program
  cout << "Press any key to exit.";
  _getch();

  return 0;
}

