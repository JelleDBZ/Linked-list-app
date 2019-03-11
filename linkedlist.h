#pragma once
#include <string>
#include "node.h"

class LinkedList{
    public: 
        void get(int index);
        LinkedList();
        std::string to_string();
        std::string print(Node * node);
    private:
        Node *head, *tail;
};