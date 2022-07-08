#include<iostream>
using namespace std;

class Deque{
    int *arr;
    int front,rear,size;
    public:
        Deque(int x){
            arr = new int[x];
            front = -1;
            rear = -1;
            size = x;
        }
    
        void push_back(int data){
            if((rear==size-1 && front==0) || (rear=(front-1)%(size-1))
            {
                cout<<"QUEUE FULL";
            }
            if(rear==-1){
                rear=front=0;
                arr[rear]=data;
                return;
            }
            else if(rear==size-1 && front!=0){
                rear=0;
                arr[rear]=data;
            }
            else{
                arr[++rear] = data;
            }
        }
        void push_front(int data){
        }
   
        int pop_back(){
        }
        int pop_front(){
        }
        bool isEmpty(){
        }

        int front(){
        }
        int back(){
        }
};

int main(){
    return 0;
}