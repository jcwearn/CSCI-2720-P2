#include <iostream>
using namespace std;

class t3solver {
 public:
  struct TreeNode {
    string board;
    TreeNode *child_0;
    TreeNode *child_1;
    TreeNode *child_2;
    TreeNode *child_3;
    TreeNode *child_4;
    TreeNode *child_5;
    TreeNode *child_6;
    TreeNode *child_7;
    TreeNode *child_8;
  };//struct TreeNode

  TreeNode * root;
  TreeNode * temp;
  TreeNode * new_node;

  t3solver(string board) {
    root = new TreeNode;
    root->board = board;
    new_node = root;
    temp = root;
  }

  ~t3solver() {
    
  }

  void add_node(string);
};//t3solver
