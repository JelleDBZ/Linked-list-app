#include "linkedlist.h"
#include <iostream>
#include "node.h"

LinkedList::LinkedList(){
    this->head = nullptr;
    this->length = 0;
}

LinkedList::~LinkedList(){
    
}

void LinkedList::insert(int new_data)
{
    Node* node = new Node(new_data);
    node->set_next(this->head);
    this->head = node;
    this->length++;
}

void LinkedList::print()
{
    int i = 0;
    Node* n = this->head;
    while(n != NULL){
        int data = n->get_data();
        std::cout << i << ": " << data << std::endl;
        n = n->get_next();
        i++;
    }
}

int LinkedList::get(int index){
    Node* n = this->head;
    int counter = 0;
    while(n != NULL && counter < index){
        counter++;
        n = n->get_next();
    }

    return (n != NULL ) ? n->get_data() : NULL;
    
}