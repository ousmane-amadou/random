#include <iostream>
using namespace std;

/* Section 1: Logical Operators */
void lop() {
  bool a = true, b = false;
  bool c = ~a;

  cout << c << "\n";        // NOT
  cout << (a && b) << "\n"; // AND
  cout << (a || b) << "\n"; // OR
  cout << (a ^ b)  << "\n"; // XOR

  /**** Notes *****/
  // * 'cout << ~a;' does not return 0,
  // * it returns two's complement
  // more: learn moe about binary numbers / operation

}

/* Section 2: Input and Output Streams + Flow Control */
void io() {
  int lifepoints;
  cin >> lifepoints;

  // if (lifepoints == 0) cout << "dead";
  switch (lifepoints) {
    case 0:
      cout << "dead!";
      break;
    case 100:
      cout << "full!";
      break;
    default:
      cout << "not dead or full!";
      break;
  }

  /**** Notes *****/
  // cout, cin are both 'streams'
  // cout is used with insertion operator
  // '<<' is the insertion operator
  // << inserts the data
  // more: https://courses.cs.vt.edu/cs1044/Notes/C04.IO.pdf
  // more control flow: dowhile loop, and continue+break keyword
}

/* Section 3: Arrays */
void arr() {
  float fArray[16]; // declares an array with 16 elements

  // Indexing Arrays
  fArray[0] = 0.0;
  // fArray[20] = 20.0 !! BAD OUT OF BOUNDS ERROR !!

  int intArray[7] = {0, 1, 2, 3, 4, 5, 6};
  int intArray2[] = {0, 1, 2, 3, 4, 5, 6, 7};

  int sum[7];
  for(int i = 0; i < 7; ++i) {
    sum[i] = intArray[i] + intArray2[i];
    cout << intArray[i] << " + " << intArray2[i] << " = ";
    cout << sum[i] << endl;
  }
  /*** NOTES ***/
  // * Code will compile if there are illegal assignments... however
  //   there will be errors
  // * endl: http://www.cplusplus.com/reference/ostream/endl/
  // LEARN MORE ABOUT STREAMS IN C++
}

int main() {
  // lop();
  // io();
  arr();
}
