#include <iostream>
#include <cstdlib>

using namespace std;

/* Section 1: Functions */
// Function definition
float Area() {
  float PI = 3.14;
  float radius = 0.0f;
  cout << "Enter a radius of a circle: ";
  cin >> radius;
  float area = PI*radius*radius;
  return area;
}
// Function Overloading
float Area(), Area(float f);

// Defualt Paramaters
void printsomething(string text = "Defualt", int n = 5);

/* Section 2: Math Library Functions */
int m() {
  // float cosf, sinf, tanf
  // float acosf, asinf, atanf
  // float sqrtf, logf, powf(float x, float y)
  // float fabsf, floorf, celif
  // rand() , returns random integer
  int n;
  int r = rand() % n; // r is in (0, n-1)
}

// NEXT TIME
// http://www.cplusplus.com/reference/ostream/endl/
// http://www.cplusplus.com/reference/ostream/basic_ostream/flush/
// https://stackoverflow.com/questions/30512953/what-exactly-is-a-client-of-a-class
// http://www.cplusplus.com/doc/tutorial/files/

// Function declaration
// * Tells the compiler about a function's name, return type, and parameters.
float Square();


int main() {
  // Client Code
  float a1 = Area();
  return EXIT_SUCCESS;
}
