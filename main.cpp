#include <iostream>
#include "bull.h"
#include "node.h"
#include "linkedlist.h"

using namespace std;
 

void print(Node * node){ // will print the nodes
    
    while(node != NULL){
        int data = node->get_data();
        cout << std::to_string(data) << endl;
        node = node->get_next();
    }
}

int main()
{

    Bull bulldozer(300, 800, "Jelle");

    Node start(0);
    Node second(1);
    Node last(2);

    start.set_next(&second);
    second.set_next(&last);

/* with linkedlist class, if you comment this whole section the other outputs will appear! */
    LinkedList* list = new LinkedList();
    list->insert(5);
    list->insert(100);
    list->insert(45);
    list->insert(60);
    list->insert(70);

    std::cout << "Showing data from linkedlist: " << endl;
    list->print();
    
  /* with linkedlist class, if you comment this whole section the other outputs will appear! */

    std::cout << "Showing data from nodes: " << endl;
    print(&start);

    std::cout << "Testing result from one node:" << endl;
    std::cout << bulldozer.to_string() << endl;
    std::cout << std::to_string(second.get_data()) << "   " << second.get_next() << endl;

    return 0;
}