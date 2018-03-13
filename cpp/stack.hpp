/* C++ implementation of stack data structure.
 */

#ifndef _STACK_H_

template <class T>
class myStack
{
private:
    T _stack[capacity];
public:
    int capacity;
    int top;
    myStack()
    {
        capacity = 16;
        top = -1;
    }
    void push(T element);
    void pop();
    T top();
};

template <class T>
myStack<T>::push(T element)
{

}

#endif
