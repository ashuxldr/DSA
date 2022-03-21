// CREATE AND IMPLEMENT STACK DATA STRUCTURES
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack {
	int top;
public:
	int a[MAX]; // Maximum size of Stack
	Stack() { top = -1; }
    bool push(int x)
    {
        if (top >= (MAX - 1)) {
            cout << "STACK FULL";
            return false;
        }
        else {
            a[++top] = x;
            cout << x << " PUSHED INTO STACK\n";
            return true;
        }
    }

    int pop()
    {
        if (top < 0) {
            cout << "STACK EMPTY";
            return 0;
        }
        else 
            return a[top--];
    }
    int peek()
    {
        if (top < 0) {
            cout << "Stack is Empty";
            return 0;
        }
        else 
            return a[top];
    }
    bool isEmpty()
    {
        return (top < 0);
    }
};

int main()
{
	class Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.pop() << " POPPED\n";
	cout<<"ELEMENTS IN STACK : ";
	while(!s.isEmpty())
	{
		cout<<s.pop()<<" ";
	}
	return 0;
}
