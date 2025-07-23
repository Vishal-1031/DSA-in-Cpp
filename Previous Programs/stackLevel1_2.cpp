#include <iostream>
using namespace std;
class stack{
    public:

    int* arr ;
    int top;
    int size; // total size of array not total number of elements 

    // consteuctor 
    stack(int size){
        arr = new int[size];// arr pointer ko hmne memory allocate krwadi 
        this->size = size;
        top = -1;// top element dikhata hai, empty stack ke case me kuch v nhi hoga 

        // functions
        void push(int data) {
          if ((size - top) > 1)
            // space available
            // insert
            top++;
          arr[top] = data;
        }
        else {
          // space not available
          cout << "Stack Overflow " << endl;
        }

        void pop() {
          if (top == -1) {
            // stack is empty
            cout << "Stack underflow, cant delete element" << endl;
          } else {
            // stack is not empty
            top--;
          }
        }
        void top() {
          if (top == -1)
            cout << "There is no element in the Stack " << endl;
          else
            return arr[top];
        }
        // number of valid elements present in the stack 
        int getsize()
    }
} ;