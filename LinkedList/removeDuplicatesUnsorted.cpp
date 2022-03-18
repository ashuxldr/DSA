// Remove duplicate element from unsorted Linked List
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
    // USING TWO FOR LOOPS (NESTING)
    void removeDuplicateUnsorted()
{
    Node *ptr1, *ptr2, *dup;
    ptr1 = head;
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
        while (ptr2->next != NULL) {
            if (ptr1->data == ptr2->next->data) {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else 
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
    void removeDuplicatesHashing(){
        unordered_set <int> numbers;
        Node* curr = head;
        Node* prev = NULL;
        while(curr!=NULL){
            if(numbers.find(curr->data) != numbers.end()){
                prev->next = curr->next;
                delete(curr);
            }
            else{ 
                numbers.insert(curr->data);
                prev = curr;
            }
            curr = prev->next;
        }
    }
    };

int main()
{
    LinkedList ll;
    ll.insertNodeAtTail(1);
    ll.insertNodeAtTail(2);
    ll.insertNodeAtTail(2);
    ll.insertNodeAtTail(4);
    ll.insertNodeAtTail(5);
    ll.insertNodeAtTail(5);
    ll.insertNodeAtTail(7);
    ll.insertNodeAtTail(8);
    ll.removeDuplicatesHashing();
    ll.display();
    return 0;
}