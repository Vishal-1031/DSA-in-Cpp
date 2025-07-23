#include <iostream>
#include <stack>
using namespace std;

int main (){

// creation 
stack<int> st; // stack created 
// insertion 
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
st.push(60);
st.push(70);
st.push(80);

// remove 
st.pop();

// check element on the top 
cout << "Element on the top is: " << st.top() << endl;

// size 
cout << "size of the stack is : " << st.size() << endl;

// check if the stack is empty or not 
if(st.empty()){
    cout << "the stack is empty " << endl;
}
else {
    cout << "the stack is not empty " << endl;
}

// Printing the elements of the stack 
cout << "printing the elements of the stack " << endl;
while (!st.empty()){
    cout << st.top() << endl;
    st.pop();
}

}