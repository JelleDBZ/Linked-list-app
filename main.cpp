#include <iostream>
#include "bull.h"
#include "node.h"

using namespace std;
 

void print(Node * node){
    
    while(node->get_next() != NULL){
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

    second.set_next(&last);
  
    print(&start);

    std::cout << "Testing result:" << endl;
    std::cout << bulldozer.to_string() << endl;
    std::cout << std::to_string(second.get_data()) << "   " << second.get_next() << endl;

    return 0;
}