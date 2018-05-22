/* C++ implementation of stack data structure using singly linked list.
*/

#ifndef _VSTACK_H_
#define _VSTACK_H_

#include <cstring>
#include <vector>
#include "exceptions.h"

template <class T>
class Vstack
{
    private:
        std::vector<T> _stack;
        ssize_t tpointer;
    public:
        Vstack();
        Vstack(const Vstack& other);
        Vstack& operator=(const Vstack& other);
        ~Vstack();
        void push(const T& element);
        void pop();
        const T& top();
        size_t size();
        bool empty();
};

template <class T>
Vstack<T>::Vstack() : tpointer(-1) { }

template <class T>
Vstack<T>::Vstack(const Vstack& other) { }

template <class T>
Vstack<T>& Vstack<T>::operator=(const Vstack& other) { }

template <class T>
Vstack<T>::~Vstack()
{
    _stack.clear();
}

template <class T>
void Vstack<T>::push(const T& element)
{
    _stack[++tpointer] = element;
}

template <class T>
void Vstack<T>::pop()
{
    if (!empty())
    {
        --tpointer;
    }
    throw StackException ("Cannot pop from empty stack.");
}

template <class T>
const T& Vstack<T>::top()
{
    if (!empty())
        return _stack[tpointer];
    throw StackException ("Cannot return top element from empty stack.");
}

template <class T>
size_t Vstack<T>::size()
{
    return tpointer+1;
}

template <class T>
bool Vstack<T>::empty()
{
    return (tpointer == -1);
}

#endif
