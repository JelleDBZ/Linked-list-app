#pragma once
#include <string>
#include "node.h"

class LinkedList{
    public: 
        int get(int index);
        LinkedList();
        void insert(int new_data);
        std::string to_string();
        void print();
    private:
        Node *head;
        int length;
};