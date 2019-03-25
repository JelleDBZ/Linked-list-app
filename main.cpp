#include <iostream>
#include "bull.h"
#include "node.h"
#include "linkedlist.h"

using namespace std;
 


int main()
{

    int index = 4; //index to get from the linkedlist

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

    std::cout << "Showing the fourth node in the list" << endl;
    std::cout << list->get(index) << endl; //does not work yet
    
  /* with linkedlist class, if you comment this whole section the other outputs will appear! */

    std::cout << "Testing result from one node:" << endl;
    std::cout << bulldozer.to_string() << endl;
    std::cout << std::to_string(second.get_data()) << "   " << second.get_next() << endl;

    return 0;
}