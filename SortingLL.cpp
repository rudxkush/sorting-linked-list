/***********************
  Sorting Linked List
************************/
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    // Constructor
    Node(int value) : data(value), next(nullptr) {}
};

// Create a new linked list by taking user input
Node* createLL() {
    int sizeLL;
    cout << "ENTER SIZE: ";
    cin >> sizeLL;

    if (sizeLL <= 0) {
        cout << "Invalid size\n";
        return nullptr;
    }

    int tempValue;
    cout << "ENTER VALUE: ";
    cin >> tempValue;
    
    Node* head = new Node(tempValue);
    Node* tail = head;
    
    for (int i = 1; i < sizeLL; i++) {
        cout << "ENTER VALUE: ";
        cin >> tempValue;
        tail->next = new Node(tempValue); 
        tail = tail->next;
    }
    return head;
}

// Print the linked list
void traversal(Node* head) {
    Node* iterator = head;
    while (iterator != nullptr) {
        cout << iterator->data;
        if (iterator->next != nullptr) {
            cout << " -> ";
        }
        iterator = iterator->next;
    }
    cout << std::endl;
}

// Split the linked list into two halves using the fast/slow pointer technique
void splitList(Node* head, Node** front, Node** back) {
    if (head == nullptr || head->next == nullptr) {
        *front = head;
        *back = nullptr;
        return;
    }
    
    Node* slow = head;
    Node* fast = head->next;
    
    // Fast pointer moves twice as fast as slow pointer
    while (fast != nullptr) {
        fast = fast->next;
        if (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    
    // Slow pointer is at the midpoint
    *front = head;
    *back = slow->next;
    slow->next = nullptr;  // Split the list
}

// Merge two sorted linked lists
Node* mergeLists(Node* a, Node* b) {
    Node dummy(0);  
    Node* tail = &dummy;
    
    while (a != nullptr && b != nullptr) {
        if (a->data <= b->data) {
            tail->next = a;
            a = a->next;
        } else {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }
    
    if (a != nullptr) {
        tail->next = a;
    } else {
        tail->next = b;
    }
    
    return dummy.next;
}

// Merge sort for linked list
void mergeSort(Node** headRef) {
    Node* head = *headRef;
    Node* a;
    Node* b;
    
    // Base case
    if (head == nullptr || head->next == nullptr) {
        return;
    }
    
    // Split the list into two halves
    splitList(head, &a, &b);
    mergeSort(&a);
    mergeSort(&b);
    *headRef = mergeLists(a, b);
}

// Free memory used by the linked list
void freeLinkedList(Node* head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* linkedlist = createLL();
    cout << "Linked List\n";
    traversal(linkedlist);
    mergeSort(&linkedlist);
    cout << "Updated LList\n";
    traversal(linkedlist);
    freeLinkedList(linkedlist);
    return 0;
}
