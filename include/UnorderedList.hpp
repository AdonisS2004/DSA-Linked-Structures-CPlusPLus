#pragma once
#include "Node.hpp"

class UnorderedList {
    public:
        Node *head;
        UnorderedList();
        bool isEmpty() const;
        void add(int item);
        void remove(int item);
        int size() const;
        bool contains(int item) const;
};