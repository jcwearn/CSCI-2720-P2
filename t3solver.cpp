#include <iostream>
#include "t3solver.h"
using namespace std;

void t3solver::add_node(string board) {
  new_node = new TreeNode;
  new_node->board = board;
  
}

