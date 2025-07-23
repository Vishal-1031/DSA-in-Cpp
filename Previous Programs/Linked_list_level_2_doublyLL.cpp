// Doubly linked List
#include_next <iostream>
using namespace std;

class node {

  public:
    int data;
    node *next;
    node *prev;


    // Default Constructor
    node() {
      this->data = 0;
      this->next = nullptr;
      this->prev = nullptr;
    }

    // Parameterised constructor
    node(int data) {
      this->data = data;
      this->next = nullptr;
      this->prev = nullptr;
    }
  
};