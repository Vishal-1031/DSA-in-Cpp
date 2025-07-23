#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> s) {

  while (!s.empty()) {
    cout << s.top() << endl;
    s.pop();
  }
}

void insertAtBottom(stack<int> &s, int target) {

  if (s.empty()) {
    s.push(target);
    return;
  }
  int topElement =
      s.top(); // whenever using this function always make sure that
               // there must be no element at the bottom of the stack
  s.pop();
  insertAtBottom(s, target);
  s.push(topElement);
}

void reversestack(stack<int> &s) {

  // base case
  if (s.empty()) {
    return;
  }

  int target = s.top();
  s.pop();

  reversestack(s);

  insertAtBottom(s, target);
}

int main() {

  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  cout << "Before" << endl;
  print(s);
  reversestack(s);

  cout << "After" << endl;
  print(s);

  return 0;
}
