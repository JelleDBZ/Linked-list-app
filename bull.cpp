#include "bull.h"

Bull::Bull(unsigned int weight, unsigned int liftCapacity, std::string name){
    this->weight = weight;
    this->liftCapacity = liftCapacity;
    this->name = name;
}

std::string Bull::to_string(){
    return "Weight: " + std::to_string(this->weight);
}