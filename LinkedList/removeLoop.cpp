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

public:
    Node *head;
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

    void removeLoop(Node* slow, Node* head){
        Node *ptr1 = slow;
        Node *ptr2 = slow;
        int k=1;
        while(ptr1->next != ptr2){
            ptr1= ptr1->next;
            k++;
        }
        ptr1 = head;
        ptr2 = head;
        while(k--)
        ptr2 = ptr2->next;
     
        while (ptr2 != ptr1) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        while (ptr2->next != ptr1)
        ptr2 = ptr2->next;

        ptr2->next = NULL;
    }

    Node* detectAndRemoveLoop()
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *slow = head, *fast = head;
    slow = slow->next;
    fast = fast->next->next;
    while (fast && fast->next) {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (slow != fast)
        return NULL;
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
    void createLoop()
    {
        Node *curr = head;
        while (curr->next)
            curr = curr->next;
        curr->next = head;
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
    ll.createLoop();
    Node* result = ll.detectAndRemoveLoop();
    if (result == NULL)
        cout << "NO LOOP";
    else
        cout << "STARTING POINT = " << result->data;
    return 0;
    
}