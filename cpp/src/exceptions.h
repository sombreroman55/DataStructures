/* Header file for exceptions related to each type of data structure */

#ifndef _EXCEPTIONS_H_
#define _EXCEPTIONS_H_

#include <iostream>
#include <string>
#include <exception>

class StackException : public std::runtime_error 
{
    public:
        StackException() : std::runtime_error("") { }
        StackException(std::string msg) : std::runtime_error(msg) { }
};

// TODO: implement error classes for other data structure classes

/*
class QueueException
{
    private:
        std::string errormsg;
    public:
        StackException(std::string msg) : errormsg(msg) { }
        ~StackException() { }
        void what() { std::cerr << errormsg << std::endl; }
};
*/

#endif
