#include <iostream>
using namespace std;

class node {
public:
  int data;
  node *next;

  // Ye wala constructor jab koi data pass nhi krenge object creation ke time 
  node() {
    this->data = 0;
    this->next = nullptr;
  }

  // Ye wala pointer jab ham koi data pass krenge object creation ke time 
  node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

void print(node *&head) {
  node *temp = head;
  while (head != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
// I want to insert a node at the head of the linked list
void insertatfirst( node *&head, node *&tail,int data) { // head ko hmane by reference isliye pass kiya hai kyuki hme
                                                         // original linked list me change karna hai

// HANDLING AN EMPTY LIST THIS IS THE BEST METHOD 
  // if (head == nullptr) {
  //   node *newnode = new node(data);
  //   head = newnode;
  //   tail = newnode;
  //   return ; 
  // }

  // creating a newnode
  node *newnode = new node(data);
  // Linking the required node
  newnode->next = head; // yaha pe agr head node nullptr hota to usse koi dikkt nhi aati kyuki newnode ka next->nullptr se connect horaha hai 
  // Head updation
  if (head == nullptr) {
    // mtlb ki LL empty thi aur first node abb add hogi
    tail = newnode; // tail ko upade krr diye as a first node taaki tail wala operations bhi perform krr paye 
  }
  head = newnode; // head ko upadate krenge bcz head is always first 
}

// I want to insert at the tail
void insertattail(node *&tail, node *&head, int data) {


  // if (head == nullptr) {
  //   node *newnode = new node(data);            YE BEST TARIKA HAI EMPTY LIST
  //   KO HANDLE KRNE KA                          SECOND METHOD MAINE IMPLEMENT KIYA HAI 
  //   head = newnode;
  //   tail = newnode;
  //   return ; 
  // }

  // Sabse pehla kaam hota hai ek new node banana
  node *newnode = new node(data);
  // check krr rahe hai ki tail agr null hai 
  if (tail == nullptr) { // mtlb LL empty thi aur first node abb add hone wali hai
    tail = newnode;      // tail ko 1st node banadiye
    head = newnode;      // head bhi lage haath update krr denge
  }
  else {
    // yaha pe LL non empty hai
    tail->next = newnode; // tail already hmne pass kiya hai 
  }
  tail = newnode; // new tail ko upadate krr diye 
}

int main() {

  //   node *head = new node(10);
  node *head = nullptr;
  // Note : Basically hm ye chahte hai ki jo hamari sabse pehli
  // node hai usiko hm head bana de aur usiko ham tail banade
  node *tail = nullptr;
  insertatfirst(head, tail, 20);
  insertatfirst(head, tail, 30);
  insertatfirst(head, tail, 40);
  insertatfirst(head, tail, 50);
  insertattail(tail, head, 77);
  insertattail(tail, head, 60);
  print(head);
}