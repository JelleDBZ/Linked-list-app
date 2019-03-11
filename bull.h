#pragma once
#include <string>

class Bull 
{
    public: 
        Bull(unsigned int weight, unsigned int liftCapacity, std::string name);
        std::string to_string();
    private:
        unsigned int weight;
        unsigned int liftCapacity;
        std::string name;
};