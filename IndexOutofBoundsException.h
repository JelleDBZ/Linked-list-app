#pragma once
#include <string>

class IndexOutofBoundsException {
    public:
        IndexOutofBoundsException(std::string message){
           this->message = message;
        }
    public:    
        std::string what(void) const {
            return message;
        }
    private:
        std::string message;
};