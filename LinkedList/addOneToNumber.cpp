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
    Node* reverse(Node* itr)
    {
        Node *curr = itr;
        Node *next = NULL;
        Node *prev = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node* addOneToNumber(Node* itr){
    Node* res = itr;
    Node *temp;
    int carry = 1, sum;
    while (head != NULL)
    {
        sum = carry + head->data;
        carry = (sum >= 10)? 1 : 0;
        sum = sum % 10;
        head->data = sum;
        temp = head;
        head = head->next;
    }
    if (carry > 0)
        temp->next = new Node(carry);
    return res;
}
    Node* addOne(){
    head = reverse(head);
    head = addOneToNumber(head);
    head = reverse(head);
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
    ll.addOne();
    ll.display();
    return 0;
}