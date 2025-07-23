// implementation of queue class using vector 
#include<iostream>
using namespace std;

class queue{
    public:
    int * arr;
    int size;
    int front;
    int rear;

    queue(int size){
        this->size = size;
        arr = new int[size]; // dynamically arr create kiya hai
        rear = 0;
        front = 0;

    }
    void push(int data) { // first hm check krte hai ki queue full toh nhi hai 

        if(rear == size)
            {
                cout << "Q is full" << endl;
            }
        else 
        {
            arr[rear] = data ; 
            rear ++ ; // que me rear se data push hota hai  
        } 
    }
    void pop(){
    if(front == rear){ // checking if the queue is empty
        cout << "The Q is empty" << endl;
    }
    else{
        arr[front] = -1; // marking the front 
        front ++;
        if (front ==  rear) {// iska mtlb app fhir se starting se start krr sakte hai 
            front = 0;
            rear = 0;
        }
    }
    }

    int frontElement(){
    if(front == rear){
        cout << "The queue is empty" << endl;
    }
    else{
        return arr[front];
    }
    }
    void isEmpty()
    {
    if (front == rear ) {
        cout << "The queue is empty" << endl;
    }
    else {
        cout << "The queue is not Empty" << endl;
    }
    }  
int getsize(){
    return (rear-front);
}

void print(){
    int f = front;
    int s = rear; 
    while (f<s){
        cout << arr[f] << " " ;
        f++;
    }
}

};
int main (){
    queue q(10); // queue creation 

    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

// size of the queue 
cout << "The size of the queue is " << q.getsize()<< endl;

    q.pop();

    cout << "The size of the queue is " << q.getsize()<< endl;

    cout << "The front element of the queue is " << q.frontElement() << endl;

    q.isEmpty();

    cout << "Printing the queue" << endl;
    q.print();
    

    return 0;
}