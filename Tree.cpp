#include <iostream>
using namespace std;

struct node {
  string data;
  int height;
  node * child[9];
};

class Tree {
public:
  Tree();
  Tree(string data);
  ~Tree();

  void insert(string data, node * leaf);
  node * search(string data);
  void destroy_tree();
  node * get_root();
  void print_nodes();
  string determine_string(string, int, int);
  void populate(node * n);

private:
  void destroy_tree(node * leaf);
  node * search(string data, node * leaf);

  node * root;
  node * temp;
};


Tree::Tree() {
  root = NULL;
}

Tree::Tree(string data) {
  int i;
  root = new node;
  root->data = data;
  root->height = 0;

  //sets all children to NULL
  for(i = 0; i < 9; i++) {
    root->child[i] == NULL;
  }
  
  temp = root;
}

Tree::~Tree(){
  destroy_tree();
}

void Tree::destroy_tree() {
  destroy_tree(root);
}

void Tree::destroy_tree(node * leaf) {
  if(leaf!=NULL) {
  }
}

node * Tree::get_root() {
  return root;
}

void Tree::insert(string data, node * leaf) {
  int i, j;
  //checks for first NULL child
  for(i = 0; i < 9; i++) {
    if(leaf->child[i] == NULL) {
      //first NULL child is inserted and all its children set to NULL
      leaf->child[i] = new node;
      leaf->child[i]->data = data;
      leaf->child[i]->height = leaf->height + 1;
      for(j = 0; j < 9; j++) {
	leaf->child[i]->child[j] == NULL;
      }
      break;
    }
  }
}

void Tree::print_nodes() {
  int i;
  cout << root->data << endl;

  for(i = 0; i < 9; i++) {
    cout << root->child[i]->data << endl;
    cout << "Height: "<< root->child[i]->height << endl;
  }
}

string Tree::determine_string(string data, int is_even, int child_no) {
  int replace;
  //height of node is even
  if(is_even == 0) {
    replace = data.find_first_of('*',0);
    data.replace(replace, 1,  "O");
  }
  //height of node is odd
  else if(is_even == 1) {
    replace = data.find_first_of('*',0);
    data.replace(replace, 1,  "X");
  }
  //node is root
  else {
    data.replace(child_no, 1, "X");
  }
  
  return data;
}

void Tree::populate(node * leaf) {
  int i;
  string data;

  
  for(i = 0; i < 9; i++) {
    //base case
    if(leaf->data.find_last_of('*',8) == string::npos) {
      cout << "This is a leaf!!!!!!!!! " << leaf->data << endl;
      return;
    }
    //case if leaf is root
    else if(leaf->height == 0) {
      data = determine_string(leaf->data,-1,i);
      insert(data,leaf);
      cout << "New Node Root " << data << endl;
      populate(leaf->child[i]);
    }
    //case if leaf is even height
    else if(leaf->height % 2 == 0) {
      data = determine_string(leaf->data,1,i);
      insert(data,leaf);
      cout << "New Node Even height " << data << endl;
      populate(leaf->child[i]);
      return;
    }
    //case if leaf is odd height
    else if(leaf->height % 2 != 0) {
      data = determine_string(leaf->data,0,i);
      insert(data,leaf);
      cout << "New Node Odd Height " << data << endl;
      populate(leaf->child[i]);
      return;
    } 
  }
}


int main() {
  Tree * tree = new Tree("*********");

  /*
  tree->insert("X********", tree->get_root());
  tree->insert("*X*******", tree->get_root());
  tree->insert("**X******", tree->get_root());
  tree->insert("***X*****", tree->get_root());
  tree->insert("****X****", tree->get_root());
  tree->insert("*****X***", tree->get_root());
  tree->insert("******X**", tree->get_root());
  tree->insert("*******X*", tree->get_root());
  tree->insert("********X", tree->get_root());  

  cout << "Determine String: " << tree->determine_string("*********",2,8) << endl;
  */

  tree->populate(tree->get_root());
  //tree->print_nodes();
  
  return 0;
}
