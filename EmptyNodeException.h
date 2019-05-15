#pragma once
#include <string>

class EmptyNodeException {
    public:
        EmptyNodeException(std::string message){
           this->message = message;
        }
    public:    
        std::string what(void) const {
            return message;
        }
    private:
        std::string message;
};