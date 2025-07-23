#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> s) {

  while (!s.empty()) {
    cout << s.top() << endl;
    s.pop();
  }
}

void solve(stack<int> &s, int target) {
  // base case
  if (s.empty()) {
    s.push(target);
    return;
  }
  // step 1:
  int topelement = s.top();
  s.pop();
  // rec call
  solve(s, target);
  // backtrack
  s.push(topelement);
}

void insertAtBottom(stack<int> &s) {

  if (s.empty()) {
    cout << "cannot insert at the bottom" << endl;
    return;
  }
  int target = s.top(); // whenever using this function always make sure that
                        // there must be no element at the bottom of the stack
  s.pop();
  solve(s, target);
}



int main() {

  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);

  cout << "printing before inserting" << endl;
  print(s);

  cout << "printing after inserting" << endl;
  insertAtBottom(s);
  print(s);

  
  return 0;
}
