#include<iostream>
using namespace std;
// homework modulas dwara circular logic 
class CircularQueue{

    public:
    int size;
    int *arr;
    int front;
    int rear;

    CircularQueue(int size){
        this-> size = size;
        arr = new int[size];
        front = -1 ;
        rear= -1 ;
    }

    void push(int data){

        // if the queue is empty
        // isme ek ye wala condition aata hai jisme rear front ke just pehle aa jata hai (HOMEWORK)

        // rear last me hai aur front khaali hai 

        // Queue is full 
        if(front == 0 && rear == size - 1 ){
            cout << "Q is full, cannot insert" << endl;
        }
        else if(front == -1 && rear == -1){ // first elemet 
            front = rear = 0;
            arr[rear] = data;
        }
        else if ( rear == size-1 && front != 0){ // circular nature
            rear  = 0;
            arr[rear] = data;
        }
        else { //default method
            rear++;
            arr[rear] = data;
        }
        // circular nature 

        // default 

        // first element push krna hai 
    }
    void pop(){
        // empty check
        // single element 
        // circular check
        // normal flow
        if(front == -1){
            cout << "Q is empty, cannot pop" << endl;
        }
        else if (front == rear) {// single element 
            arr [front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size -1){ // circular logic
            front = 0;
        }
        else {
            front ++;
        }
    }
};