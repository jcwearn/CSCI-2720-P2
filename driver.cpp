#include <iostream>
#include "t3solver.h"
using namespace std;

int main() {
  int input;

  cout << "Please enter an initial board position:\n";
  cout << "Note: use X, O, or * not x, o\n";

  cin >> input;

  cout << "Board serialization is: " << input << endl;
}//main
