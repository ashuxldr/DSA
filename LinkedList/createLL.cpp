#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void insertNodeAtTail(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
    }

    void deleteNode(int pos)
    {
        Node *curr = head, *prev = NULL, *next = NULL;
        while (--pos)
        {
            prev = curr;
            curr = curr->next;
            next = curr->next;
        }
        prev->next = next;
        delete curr;
    }

    void display()
    {
        Node *curr = head;
        if (head == NULL)
        {
            cout << "List empty" << endl;
            return;
        }
        while (curr != NULL)
        {
            cout << curr->data << "-->";
            curr = curr->next;
        }
    }
};

int main()
{
    LinkedList ll;
    ll.insertNodeAtTail(1);
    ll.insertNodeAtTail(2);
    ll.insertNodeAtTail(3);
    ll.insertNodeAtTail(4);
    ll.insertNodeAtTail(5);
    ll.insertNodeAtTail(6);
    ll.insertNodeAtTail(7);
    ll.insertNodeAtTail(8);
    ll.deleteNode(3);
    ll.display();
    return 0;
}