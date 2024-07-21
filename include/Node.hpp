#pragma once

class Node {
    public:
        Node(int initialValue);
        Node *getNextNode(){return nextNode;};
        void setVal(int newVal);
        int getVal(){return val;};
        void setNextNode(Node *newNextNode);
    private:
        int val;
        Node *nextNode;
};