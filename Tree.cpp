#include <iostream>
using namespace std;

struct node {
  string data;
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

private:
  void destroy_tree(node * leaf);
  void populate(node n);
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
  }
}

void Tree::populate(node n) {
  int i;
  int count;

  for(i = 0; i < 9; i++) {
    //    populate(
  }
}


int main() {
  Tree * tree = new Tree("*********");

  tree->insert("X********", tree->get_root());
  tree->insert("*X*******", tree->get_root());
  tree->insert("**X******", tree->get_root());
  tree->insert("***X*****", tree->get_root());
  tree->insert("****X****", tree->get_root());
  tree->insert("*****X***", tree->get_root());
  tree->insert("******X**", tree->get_root());
  tree->insert("*******X*", tree->get_root());
  tree->insert("********X", tree->get_root());

  tree->print_nodes();
  
  return 0;
}
