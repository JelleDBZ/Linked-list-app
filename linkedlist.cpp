#include "linkedlist.h"
#include <iostream>
#include "node.h"

LinkedList::LinkedList(){
    this->head = NULL;
    this->length = 0;
}

void LinkedList::insert(int new_data){
    Node* node = new Node(new_data);
    node->set_next(this->head);
    this->head = node;
    this->length++;

}

void LinkedList::print(Node * node){
    int i = 1;
     while(this->head != NULL){
        int data = node->get_data();
        std::cout << i << ": " << data << std::endl;
        node = node->get_next();
        i++;
    }
}

void LinkedList::get(int index){
    
}