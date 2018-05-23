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

class QueueException : public std::runtime_error 
{
    public:
        QueueException() : std::runtime_error("") { }
        QueueException(std::string msg) : std::runtime_error(msg) { }
};

// TODO: implement error classes for other data structure classes

#endif
