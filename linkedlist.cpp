#include "linkedlist.h"
#include <iostream>
#include "node.h"
#include "IndexOutofBoundsException.h"

LinkedList::LinkedList(){
    this->head = nullptr;
    this->length = 0;
}

LinkedList::~LinkedList(){
    Node* node = this->head;
    while (node != 0){
        Node* next = node->get_next();
        delete node;
        node = next;
    }
    this->head = nullptr;
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
        if (index < 0 || index > this->length - 1) {
            throw IndexOutofBoundsException("The index is out of bound!");
        }
        counter++;
        n = n->get_next();
    }

    return (n != NULL ) ? n->get_data() : NULL;
    
}