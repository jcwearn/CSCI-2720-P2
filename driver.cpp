#include <iostream>
#include "t3solver.h"
using namespace std;

int main() {
  string board;
  int input;

  cout << "Please enter an initial board position:\n";
  cout << "Note: use X, O, or * not x, o\n";
  cin >> board;
  cout << endl;
  cout << "Board serialization is: " << board << endl;
  cout << endl;
  cout << "Please choose from the following:\n\n";
  cout << "1:Total Nodes\n";
  cout << "2:PreOrder Traversal\n";
  cout << "3:PostOrder Traversal\n";
  cout << "4:LevelOrder Traversal\n";
  cout << "5:Path to a terminal board position\n";
  cout << "6:Find max winner from a given game board\n";
  cout << "Any other number: EXIT\n";
  cin >> input;

  switch (input) {
  case 1: cout << "You chose 1\n";
    break;
  case 2: cout << "You chose 2\n";
    break;
  case 3: cout << "You chose 3\n";
    break;
  case 4: cout << "You chose 4\n";
    break;
  case 5: cout << "You chose 5\n";
    break;
  case 6: cout << "You chose 6\n";
    break;
  default: cout << "You chose any other number\n";
    break;
  }//switch
  
}//main
