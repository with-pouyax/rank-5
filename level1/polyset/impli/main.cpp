// -----------> bag:
// - abstract class
// - defines the general interface for any type of bag
// - all methods are pure virtual (must be implemented in derived classes):
//   - insert(int):
//       * abstract
//       * contract: insert a single integer into the bag
//       * behavior depends on child class
//   - insert(int*, int):
//       * abstract
//       * contract: insert an array of integers into the bag
//       * behavior depends on child class
//   - print() const:
//       * abstract
//       * contract: print the content of the bag
//       * array_bag -> print array elements
//       * tree_bag -> depends on child class
//   - clear():
//       * abstract
//       * contract: remove all elements from the bag
//       * behavior depends on child class

// -----------> searchable_bag:
// - abstract class
// - inherits virtually from bag
// - adds one more pure virtual function:
//   - has(int) const:
//       * abstract
//       * contract: return true if the bag contains the given integer
//       * behavior depends on child class

// -----------> array_bag:
// - concrete class (not abstract)
// - inherits virtually from bag
// - protected members:
//   - int* data -> pointer to dynamic array storing integers
//   - int size -> number of elements currently stored (size of our array)
// - public methods:
//   - constructor:
//       * sets size = 0, data = nullptr 
//   - copy constructor:
//       * creates a deep copy of another array_bag
//   - assignment operator:
//       * deletes current array, allocates new memory, copies elements
//   - destructor:
//       * frees the allocated array
//   - insert(int):
//       * overrides bag::insert(int)
//       * allocates new array of size+1, copies old values, appends new item, deletes old array
//   - insert(int*, int):
//       * overrides bag::insert(int*, int)
//       * allocates new array of size+count, copies old values, appends new items, deletes old array
//   - print() const:
//       * overrides bag::print()
//       * prints all integers in the array in order of insertion
//   - clear():
//       * overrides bag::clear()
//       * deletes the array and sets size = 0

// -----------> tree_bag:
// - concrete class (not abstract)
// - inherits virtually from bag
// - protected members:
//   - struct node:
//       * represents one node in the binary search tree
//       * contains: int value, node* l (left), node* r (right)
//   - node* tree -> root of the tree
// - public methods:
//   - constructor:
//       * initializes tree = nullptr
//   - copy constructor:
//       * copies another tree by recursively duplicating all nodes
//   - assignment operator:
//       * destroys current tree, then deep copies source tree
//   - destructor:
//       * calls destroy_tree on the root to free all nodes
//   - extract_tree():
//       * returns the current root pointer and sets tree = nullptr
//   - set_tree(node*):
//       * replaces the current tree with a new root (destroys old one first)
//   - insert(int):
//       * overrides bag::insert(int)
//       * inserts value into BST (left if smaller, right if larger, ignores duplicates)
//   - insert(int*, int):
//       * overrides bag::insert(int*, int)
//       * inserts each value of the array one by one into the BST
//   - print() const:
//       * overrides bag::print()
//       * in-order traversal: prints sorted order of values
//   - clear():
//       * overrides bag::clear()
//       * destroys tree and sets tree = nullptr
// - private static helper methods: (static means that we can call them without creating an instance of the class)
//   - destroy_tree(node*):
//       * recursive delete of all nodes in subtree
//   - print_node(node*):
//       * recursive in-order print
//   - copy_node(node*):
//       * recursively deep copies a subtree



#include "searchable_bag.hpp"

#include <iostream>

int main(int argc, char **argv) {
  if (argc == 1)                        // we need at least one argument
    return 1;
  searchable_bag *t = new searchable_tree_bag; // it should inherit from searchable_bag and tree_bag because subject says so.
  // searchable_bag *a = new searchable_array_bag;

  // for (int i = 1; i < argc; i++) {
  //   t->insert(atoi(argv[i]));
  //   a->insert(atoi(argv[i]));
  // }
  // t->print();
  // a->print();

  // for (int i = 1; i < argc; i++) {
  //   std::cout << t->has(atoi(argv[i])) << std::endl;
  //   std::cout << a->has(atoi(argv[i])) << std::endl;
  //   std::cout << t->has(atoi(argv[i]) - 1) << std::endl;
  //   std::cout << a->has(atoi(argv[i]) - 1) << std::endl;
  // }

  // t->clear();
  // a->clear();

  // const searchable_array_bag tmp(static_cast<searchable_array_bag &>(*a));
  // tmp.print();
  // tmp.has(1);

  // set sa(*a);
  // set st(*t);
  // for (int i = 1; i < argc; i++) {
  //   st.insert(atoi(argv[i]));
  //   sa.insert(atoi(argv[i]));

  //   sa.has(atoi(argv[i]));
  //   sa.print();
  //   sa.get_bag().print();
  //   st.print();
  //   sa.clear();
  //   sa.insert(
  //       (int[]){
  //           1,
  //           2,
  //           3,
  //           4,
  //       },
  //       4);
  //   std::cout << std::endl;
  // }

  return 0;
}
