#include <iostream>
#include "bull.h"

using namespace std;
 

int main()
{
    cout << "Hello World!" << endl;

    Bull bulldozer(300, 800, "Jelle");

    std::cout << "Testing result:" << endl;
    std::cout << bulldozer.to_string() << endl;

    return 0;
}