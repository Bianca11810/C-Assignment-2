/*
---------------------------------------------------
Name: Bianca Murillo
Student ID: 
COP 1334 - Introduction to C++ Programming
Fall 2023 - T 5:30 PM - 8:50 PM
Assignment # 1
Plagiarism Statement
I certify that this assignment is my own work and that I have not
copied in part or whole or otherwise plagiarized the work of other
students, persons, Generative Pre-trained Generators (GPTs) or any other AI
tools. I understand that students involved in academic dishonesty will face
disciplinary sanctions in accordance with the College's Student Rights
and Responsibilities Handbook (https://www.mdc.edu/rightsandresponsibilities)
01234567890123456789012345678901234567890123456789012345678901234567890123456789
----------------------------------------------------------
*/
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // storage
  // cm = inches * 2.54;
  // foot = inches / 12;
  // yard = inches / 36;
  // //variables
  float inches, cm, foot, yards, value1, value2, value3, value4;

  // input
  cout << "Welcome to Cruz Solar Solutions, Inc. Cost Conversion Utility!"
       << endl;

  cout << "Please enter the first value inches: ";
  cin >> value1;
  cout << "Please enter the second value in inches: ";
  cin >> value2;
  cout << "Please enter the third value in inches: ";
  cin >> value3;
  cout << "Please enter the fourth value in inches: ";
  cin >> value4;

  cout << endl;

  // procressing
  cout << "Calculating......." << endl;
  cout << endl;

  // output
  cout << "Here are the conversions:" << endl;
  cout << endl;
  
  cout << showpoint;
  cout << setprecision(2) << fixed;
  
  cout << setw(13) << "Input(In) " << setw(9) << "Yards " << setw(9) << "Feet "
       << setw(8) << "Cm " << endl;
  cout << setw(10) << value1 << setw(10) << value1 / 36 << setw(10)
       << value1 / 12 << setw(10) << value1 * 2.54 << endl;
  cout << setw(10) << value2 << setw(10) << value2 / 36 << setw(10)
       << value2 / 12 << setw(10) << value2 * 2.54 << endl;
  cout << setw(10) << value3 << setw(10) << value3 / 36 << setw(10)
       << value3 / 12 << setw(10) << value3 * 2.54 << endl;
  cout << setw(10) << value4 << setw(10) << value4 / 36 << setw(10)
       << value4 / 12 << setw(10) << value4 * 2.54 << endl;

  cout << endl;

  cout << "Thank You for using Cruz solar Solutions, Inc. Cost Conversion Utility!";
}