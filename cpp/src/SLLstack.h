/* C++ implementation of stack data structure using singly linked list.
*/

#ifndef _SLLSTACK_H_
#define _SLLSTACK_H_

#include <cstring>
#include "exceptions.h"

template <class T>
class SLLstack
{
    private:
        struct SLLstackNode
        {
            T data;
            SLLstackNode* next;
            SLLstackNode(const T& dat, SLLstackNode* n) : data(dat), next(n) { }
        };
        SLLstackNode* tpointer;
        size_t sz;
    public:
        SLLstack();
        SLLstack(const SLLstack& other);
        SLLstack& operator=(const SLLstack& other);
        ~SLLstack();
        void push(const T& element);
        void pop();
        const T& top();
        size_t size();
        bool empty();
};

template <class T>
SLLstack<T>::SLLstack() : tpointer(0), sz(0) { }

template <class T>
SLLstack<T>::SLLstack(const SLLstack& other) { }

template <class T>
SLLstack<T>& SLLstack<T>::operator=(const SLLstack& other) { }

template <class T>
SLLstack<T>::~SLLstack()
{
    while (!empty())
    {
        pop();
    }
}

template <class T>
void SLLstack<T>::push(const T& element)
{
    SLLstackNode* nn = new SLLstackNode(element, tpointer);
    tpointer = nn;
    sz++;
}

template <class T>
void SLLstack<T>::pop()
{
    if (!empty())
    {
        SLLstackNode* del = tpointer;
        tpointer = del->next;
        delete del;
        sz--;
        return;
    }
    throw StackException ("Cannot pop from empty stack.");
}

template <class T>
const T& SLLstack<T>::top()
{
    if (!empty())
        return tpointer->data;
    throw StackException ("Cannot return top element from empty stack.");
}

template <class T>
size_t SLLstack<T>::size()
{
    return sz;
}

template <class T>
bool SLLstack<T>::empty()
{
    return (sz == 0);
}

#endif
