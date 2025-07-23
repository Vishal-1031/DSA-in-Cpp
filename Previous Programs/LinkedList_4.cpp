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

  ~node() {
    cout << "The element "<< this->data <<" is been deleted " << endl;
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

void deletenode(int position, node *&head, node *&tail) {
  
  if (head == nullptr) {
    cout << "The node dooes not exists" << endl;
    return;
  } else if (position == 1) {
    // for first position 
    cout << "The first node is to be deleted " << endl;
    node *temp = head;
    head = head->next;
    temp->next = nullptr;
    delete temp ;
  }
  else if (position == findlen(head)) {
    // for last position
    // Find out previous
    int i = 1;
    node* prev = head;
    while (i < position - 1) {
        prev =prev -> next ;
        i++;
    }
    tail = prev; //updating tail
    delete prev->next; 
    prev->next = nullptr;
  } else {
    // for any random position
    int i = 1;
    node *prev = head;
    while (i < position - 1) {
      prev = prev->next;
      i++;
    }
    node *curr = prev->next;

    prev->next = curr->next;
    curr->next = nullptr;
    delete curr;
  }
  }

void print(node *&head) {
  node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  
  } 
}

int main(){
  node *head = nullptr;
  node *tail = nullptr;
  insertatthefirst(head, tail, 20);
  insertatthefirst(head, tail, 30);
  insertatthefirst(head, tail, 40);
  insertatthetail(head, tail, 70);
   insertatthetail(head, tail,  80);
   print(head);
   cout << endl;
   deletenode(3, head, tail);

   print(head);
   cout << endl;
   cout << "Head-> " << head->data << endl;
   cout << "tail-> " << tail->data << endl;
   return 0;
}
 