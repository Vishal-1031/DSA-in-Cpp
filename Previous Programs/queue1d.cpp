#include<iostream>
using namespace std;

class DeQueue{

    public:
    int* arr ;
    int front ;
    int rear ;
    int size ;

    DeQueue(int size){ 

        this.size-> size;
        arr = new int[size];
        rear = -1 ;
        front = -1 ;

    }

     void pushRear(int data){

        // if the queue is empty
        // isme ek ye wala condition aata hai jisme rear front ke just pehle aa jata hai (HOMEWORK)

        // rear last me hai aur front khaali hai 
        // circular nature 
        // default 
        // first element push krna hai 

        // Queue is full 
        if(front == 0 && rear == size - 1 ){
            cout << "Q is full, cannot insert" << endl;
            return;
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

     }

     void pushFront(){

         if(front == 0 && rear == size - 1 ){
            cout << "Q is full, cannot insert" << endl;
        return ;
        }
        else if(front == -1 && rear == -1){ // first elemet (single elemenet)
            front = rear = 0;
            arr[rear] = data;
        }
        else if ( rear != size-1 && front == 0){ // circular nature // agr front wali position empty hai aur (n-1)th position empty hai to front ko move kro 
            front  = n-1;
            arr[rear] = data;
           
        }
        else { //default method
            rear++;
            arr[rear] = data;
        }

     }
    void popfront(){
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

    void popRear(){
        
    }
};