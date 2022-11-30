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
    T getLast();
    T searcByIndex(int value);
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
        headNode->next=temp;
        headNode = temp;
    }
    length++;
};



template <typename T>
T queue<T>::pop()
{
    
    try
    {
        if (lastNode == NULL){
            string error="ertunun amk";
            throw error;
        }
    }
    catch (string myNum)
    {
        cout << "\nError number: " << myNum;  
    }
    
    T temp = lastNode->getValue();
    lastNode = lastNode->next;
    return temp;
}

template <typename T>
T queue<T>::getLast()
{
    
    try
    {
        if (lastNode == NULL){
            string error="ertunun amk";
            throw error;
        }
    }
    catch (string myNum)
    {
        cout << "\nError number: " << myNum;  
    }
    
    T temp = headNode->getValue();
    return temp;
}

template <typename T>
T queue<T>::searcByIndex(int value)
{
    
    try
    {
        if (lastNode == NULL){
            string error="ertunun amk";
            throw error;
        }
    }
    catch (string myNum)
    {
        cout << "\nError number: " << myNum;  
    }
    Node<T> *tempNode = new Node<T>();
    *tempNode=*lastNode;
    for (size_t i = 0; i < value; i++)
    {
        *tempNode=*tempNode->next;
    }
    return tempNode->getValue();
    
}







int main()
{
    int sayi = 15;
    queue<int> *denemeStack = new queue<int>(sayi);
    denemeStack->insert(122);
    denemeStack->insert(56);
    denemeStack->insert(562);
    denemeStack->insert(563);
    denemeStack->insert(564);
    int queueLength=denemeStack->lengthOfQueue();
    //cout << "\n" <<  queueLength << endl;
    //cout << "\n" << denemeStack->searcByIndex(0) << endl;
    cout << "\n" << denemeStack->pop() << endl;
    cout << "\n" << denemeStack->pop() << endl;


    return 0;
};