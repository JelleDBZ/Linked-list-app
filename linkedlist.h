#pragma once
#include <string>
#include "node.h"

class LinkedList{
    public: 
        void get(int index);
        LinkedList();
        void insert(int new_data);
        std::string to_string();
        void print();
    public:
        Node *head;
        int length;
};