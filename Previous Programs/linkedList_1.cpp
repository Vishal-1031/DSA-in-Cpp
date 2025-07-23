#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  // constructor
  Node() {
    this->data = 0;
    this->next = nullptr;
  }

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

void print(Node *&head) {
  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main() {

  Node *head = new Node(10);
  // isse ek new Node data type ka structure bann gaya hai heap
  // me jiska address hme head pointer me store krr rahe hai
  // jiska deta type bhi Node ke tereh hai
  Node *second = new Node(20); // basically second ek pointer hai jo ki address
                               // store krta hai ek node ki jo heap me bana hai
  Node *third = new Node(30);
  Node *fourth = new Node(40);

  // linking
  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = nullptr;

  cout << "Printing the Linked List" << endl;
  print(head);

  return 0;
}
