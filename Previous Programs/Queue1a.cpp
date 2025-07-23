#include<iostream>
#include<queue>
using namespace std;

int main (){
    // creation 
    queue<int> q;

    // insertion 
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    // size
    cout<< "size of the queue is: " << q.size()<< endl;

    q.pop(); // ie 5 since fifo
     
    cout<< "size of the queue is: " << q.size()<< endl;

    if(q.empty()){
        cout << "queue is empty" << endl;
    }
    else {
        cout << "queue is not empty " << endl;
    }
    cout << "front element is : " << q.front() << endl;

}