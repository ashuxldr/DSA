#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int front,rear,size;
    public:
        Queue(int x){
            arr = new int[x];
            front = 0;
            rear = 0;
            size = x;
        }
    
        void enqueue(int data){
            if(rear==size){
                cout<<"OVERFLOW";
                return;
            }
            arr[rear] = data;
            rear+=1;
        }
   
        int dequeue(){
            if(front==rear){
                cout<<"UNDERFLOW";
                front = rear = 0;
                return -1;
            }
            arr[front]=-1;
            front+=1;
        }
 
        bool isEmpty(){
        if(front==rear)
        {
            front = rear = 0;
            return true;
        }
        else 
            return false;
    }

        int front(){
            if(front==rear){
                cout<<"UNDERFLOW";
                front = rear = 0;
                return -1;
            }
            return arr[front];
        }
        int back(){
            if(front==rear){
                cout<<"UNDERFLOW";
                front = rear = 0;
                return -1;
            }
            return arr[rear];
        }
};

int main(){
    return 0;
}