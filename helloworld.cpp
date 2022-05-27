#include <iostream>

class Node {
public:
    int data;
    Node* next;
};

void print_list(Node* n)
{
    while (n != NULL) {
        std::cout << n->data << " ";
        n = n->next;
    }
}

void reverse_list(Node* n)
{
    Node* prev = NULL;
    Node* curr = n;
    Node* next = n->next;
    
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

}

int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    print_list(head);

    std::cout << '\n';

    reverse_list(head);

    print_list(third);
    
    delete head;
    delete second;
    delete third;
}