/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    Node* first = head;
    if(first == NULL) {
        return false;
    } else if(first->next==NULL) {
        return false;
    }
    Node *second = head->next;

    while(second->next!=NULL && second != first) {
        first = first->next;
        second = second->next->next;
    }

    if(second->next==NULL) {
        return false;
    } else {
        return true;
    }
}
