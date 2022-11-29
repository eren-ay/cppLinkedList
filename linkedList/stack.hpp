#include "node.hpp"

template <typename T>
class Stack
{
private:
    Node<T> *headNode;
    int length;

public:
    Stack();
    Stack(T);
    T getHead();
    void append(T);
    T pop();
    int getLength();
};

template <typename T>
Stack<T>::Stack()
{
    headNode = new Node<T>();
    length = 0;
    headNode = NULL;
};

template <typename T>
Stack<T>::Stack(T value)
{
    headNode = new Node<T>();
    length = 1;
    headNode->setValue(value);
};

template <typename T>
T Stack<T>::getHead()
{
    return headNode->getValue();
};

template <typename T>
void Stack<T>::append(T value)
{
    Node<T> *tempNode = new Node<T>();
    tempNode->setValue(value);
    tempNode->next = headNode;
    headNode = tempNode;
};

template <typename T>
T Stack<T>::pop()
{
    Node<T> *tempNode = new Node<T>();
    tempNode->setValue(headNode->getValue());
    headNode = headNode->next;
    return tempNode->getValue();
}

template <typename T>
int Stack<T>::getLength()
{
    return length;
};