#include <iostream>
using namespace std;
// Inserting at a random position 
class node {
  public  : 
  int data;
  node *next;

  node() {
    this->data = 0;
    this->next = nullptr;
  }

  node(int data) {
    this->data = data;
    this->next = nullptr;
  }

};

int findlen(node *&head) {
  int len = 0 ;
  node *temp = head;
  while (temp != nullptr) {
    temp = temp->next;
    len++;
  }
  return len;
    }

void insertatthefirst(node* &head,node* &tail, int data) {

  if (head == nullptr) {
    node *newnode = new node(data);
    head = newnode;
    tail = newnode;
  }
  else {
  node *newnode = new node(data);
  newnode->next = head;
  head = newnode;
  }
}

void insertatthetail(node* &head,node* &tail, int data) {

  if (tail == nullptr) {
    node *newnode = new node(data);
    head = newnode;
    tail = newnode;
  }
  else {
  node *newnode = new node(data);
  tail->next = newnode;
  tail = newnode;
  }
}

void insertatposition(int data, int position, node *&head, node *&tail) {
  
  // if you want to insert at first position then we have made seperate function for that 
  if (position == 0) {
    insertatthefirst(head, tail, data);
    return;
  }

  int len = findlen(head);

  if (position >= len) {
    insertatthetail(head, tail, data);
    return;
  }
// step 1: find out prev and current pointer 
  int i = 1;
  node *prev = head;
  while (i < position) {
    prev = prev->next;
      i ++ ;
  }
  node *curr = prev->next;

  // step 2 
  node *newnode = new node(data);

  // step 3 
  newnode->next = curr;

  // step 4
  prev->next = newnode;

}



void print(node *&head) {
  node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  
  }
  
}

int main() {
  node *head = nullptr;
  node *tail = nullptr;
  insertatthefirst(head, tail, 20);
  insertatthefirst(head, tail, 30);
  insertatthefirst(head, tail, 40);
  insertatthetail(head, tail,  70);
  print(head);
  cout << endl;

  cout << "head : " << head->data << endl;
  cout << "tail : " << tail->data << endl;

  insertatposition(100, 1, head, tail);
  print(head); 
}