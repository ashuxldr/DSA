#include<iostream>
using namespace std;

class Queue{
    
    public:
        int *arr;
        int front,rear,size;
        Queue(int x){
            arr = new int[x];
            front = -1;
            rear = -1;
            size = x;
        }

    bool enqueue(int value){
        //to check whther queue is full
        if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) ) {
            //cout << "Queue is Full";
            return false;
        }
        else if(front == -1) //first element to push
        {
			front = rear = 0;
            
        }
        else if(rear == size-1 && front != 0) {
            rear = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear++;
        }
        //push inside the queue
        arr[rear] = value;
        
        return true;
    }
         int dequeue() {
        if(front == rear) {
            return -1;
        }
        else
        {	int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front==rear){
                front = 0;
                rear = 0;
            }
         return ans;
        }
    }
 
};

int main(){
    Queue q(5);
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(1);
    cout<<q.dequeue();
    return 0;
}