#include <iostream>
#include "../include/Node.hpp"
#include "../include/UnorderedList.hpp"

UnorderedList::UnorderedList(){
    head = NULL;
}

bool UnorderedList::isEmpty() const{
    return head == NULL;
}

void UnorderedList::add(int item){
    Node *temp = new Node(item);
    temp -> setNextNode(head);
    head = temp;
}

int UnorderedList::size() const{
    Node *current = head;
    int size = 0;
    while (current -> getNextNode() != NULL){
        size++;
        current = current -> getNextNode();
    }
    return size;
}

bool UnorderedList::contains(int item) const{
    Node *current = head;
    while (current != NULL){
            if (current -> getVal() == item){
            return true;
        } else {
            current = current -> getNextNode();
        }
    }
    return false;
}

void UnorderedList::remove(int item){
    Node *current = head;
    Node *previous = NULL;
    bool found = false;

    while (current != NULL && !found){
        if (current -> getVal() == item){
            found = true;
        } else {
            previous = current;
            current = current -> getNextNode();
        }
    }

    if (previous == NULL){
        head = current -> getNextNode();
    } else {
        previous -> setNextNode(current -> getNextNode());
    }
}