/* C++ implementation of queue data structure using singly linked list.
*/

#ifndef _SLLQUEUE_H_
#define _SLLQUEUE_H_

#include <cstdio>
#include <cstring>
#include "exceptions.h"

template <class T>
class SLLqueue
{
    private:
        struct SLLqueueNode
        {
            T data;
            SLLqueueNode* next;
            SLLqueueNode(const T& dat) : data(dat), next(0) { }
        };

        size_t sz;
    public:
        SLLqueue();
        SLLqueue(const SLLqueue& other);
        SLLqueue& operator=(const SLLqueue& other);
        ~SLLqueue();
        void push(const T& element);
        void pop();
        const T& front();
        size_t size();
        bool empty();
        SLLqueueNode* fpointer;
        SLLqueueNode* bpointer;
};

template <class T>
SLLqueue<T>::SLLqueue() : fpointer(0), bpointer(0), sz(0) { }

template <class T>
SLLqueue<T>::SLLqueue(const SLLqueue& other) { }

template <class T>
SLLqueue<T>& SLLqueue<T>::operator=(const SLLqueue& other) { }

template <class T>
SLLqueue<T>::~SLLqueue()
{
    while (!empty())
    {
        pop();
    }
}

template <class T>
void SLLqueue<T>::push(const T& element)
{
    SLLqueueNode* nn = new SLLqueueNode(element);
    if (empty())
    {
        fpointer = nn;
        bpointer = nn;
    }
    else
    {
        bpointer->next = nn;
        bpointer = bpointer->next;
    }
    sz++;
}

template <class T>
void SLLqueue<T>::pop()
{
    if (!empty())
    {
        SLLqueueNode* del = fpointer;
        fpointer = del->next;
        delete del;
        sz--;
        return;
    }
    throw QueueException ("Cannot pop from empty queue.");
}

template <class T>
const T& SLLqueue<T>::front()
{
    if (!empty())
        return fpointer->data;
    throw QueueException ("Cannot return front element from empty queue.");
}

template <class T>
size_t SLLqueue<T>::size()
{
    return sz;
}

template <class T>
bool SLLqueue<T>::empty()
{
    return (sz == 0);
}

#endif
