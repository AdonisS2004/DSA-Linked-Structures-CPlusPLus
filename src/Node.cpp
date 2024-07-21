#include "Node.hpp"
#include <cstddef>

Node::Node(int initialValue){
    val = initialValue;
    nextNode = NULL;
}

void Node::setVal(int newVal){
    val = newVal;
}

void Node::setNextNode(Node *newNextNode){
    nextNode = newNextNode;
}