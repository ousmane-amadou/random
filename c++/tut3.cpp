#include <iostream>
#include <cstdlib>

using namespace std;



void getMousePos(int& outX, int& outY)
{
  //
  outX = rand() % 801;
  outY = rand() % 601;
}
/* 1. References */
// * A reference is an alias to a variable.
// * References must refer to something

/* 2. Pointers */
// * A special variable type that can store the memory
//   address of another variable.
void pointers() {
  // Declaration
  int* intPtr;
  float* floatPtr;

  // Initialize to Null
  intPtr = 0;

  int intVar = 15;
  int* intPtrTwo = &intVar;

  cout << "Variable Value: " << *intPtrTwo << endl;
  cout << "Variavble Address: " << intPtrTwo << endl;
	
	// Dynamic Memory
	int size = 9;
	int* dynIntArr = new int[size];
	cout << sizeof(dynIntArr);
	delete[] dynIntArr;
}

void pointersAndArrays() {
  short shortArray[8] = {1, 2, 3, 4, 5, 6, 7};
  short* firstPtr = shortArray;

  // Pointer Arithmetic
  cout << "Style 1: Addition Operator";
  for(int i = 0; i < 8; ++i) {
    cout << *(firstPtr + 1) << " ";
  }

  cout << "Style 2: Increment Operator";
  for(int i = 0; i < 8; ++i){
    cout << *firstPtr << " ";
    ++firstPtr; // Move Pointer to next Element
  }

}
void references() {
  int value = 10; // Create Variable
  int& valueRef = value;  // Create Reference to 'value'

  //
  cout << "value = " << value << endl;
  cout << "valueRef = " << valueRef << endl;

  /* Re-assign referenced variable */
  valueRef = 500;
  cout << "value = " << value << endl;
  cout << "valueRef = " << valueRef << endl;
}

int main() {
  int x = 10;
  int y = 10;
  cout << "(" << x << ", " << y << ")" << endl;
  getMousePos(x, y);
  cout << "(" << x << ", " << y << ")" << endl;
  pointers();

}
