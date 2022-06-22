#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int x){
            data = x;
            next = nullptr;
        }
};

class Queue{
    Node *head;
    Node* front;
    Node* rear; 
    int size;
    public:
        Queue(){
            head = new Node(0);
            front = head;
            rear = head;
            size = 0;
        }
        void enqueue(int data){
            Node *temp = new Node(data);
            rear->next = temp;
            rear = temp;
            size += 1;
        }
        Node* dequeue(){
            Node* temp = front;
            if(front==rear)
            {
            temp=front;
            front = NULL;
            rear = NULL;  
            return temp;
            }
                if(rear==NULL)
                    return NULL;
                front =  front->next;
                size -= 1;
        }
        bool isEmpty()
        {
    	if(front==NULL && rear==NULL)
    		return true;
		else
			return false;
	}
        int fetch_front(){
            return front->data;
        }
        int fetch_back(){
            return rear->data;
        }
};

int main(){

    Queue* q = new Queue();
    q->enqueue(5);
    q->enqueue(6);
    q->enqueue(7);
    q->enqueue(8);
    q->dequeue();
    q->dequeue();
    cout<<q->fetch_front()<<endl;
    cout<<q->fetch_back()<<endl;
    return 0;
}