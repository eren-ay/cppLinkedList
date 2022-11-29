#include <iostream>
#include <string>
#include "stack.hpp"
using namespace std;

/************************************** queue *********************************/
template <typename T>
class queue
{
private:
    Node<T> *headNode;
    Node<T> *lastNode;
    int length;

public:
    queue();
    queue(T value);
    void insert(T value);
    T pop();
    int lengthOfQueue();
};

template <typename T>
queue<T>::queue()
{
    headNode = new Node<T>();
    headNode = NULL;
    lastNode = headNode;
    length = 0;
};

template <typename T>
queue<T>::queue(T value)
{
    headNode = new Node<T>(value);
    lastNode = headNode;
    length++;
};

template <typename T>
int queue<T>::lengthOfQueue()
{
    return length;
};

template <typename T>
void queue<T>::insert(T value)
{
    Node<T> *temp = new Node<T>(value);
    if (headNode == NULL)
    {
        headNode = temp;
    }
    else
    {
        temp->next = headNode;
        headNode = temp;
    }
    length++;
};

template <typename T>
T queue<T>::pop()
{
    if (lastNode == NULL)
    {
        printf("Error: Node is empty");
        return lastNode->getValue();
    }
    T temp = lastNode->getValue();
    lastNode = lastNode->next();
    return temp;
}

int main()
{
    int sayi = 15;
    queue<int> *denemeStack = new queue<int>(sayi);
    denemeStack->insert(11);
    printf("%d", denemeStack->lengthOfQueue());
    cout << denemeStack->pop();
    return 0;
};