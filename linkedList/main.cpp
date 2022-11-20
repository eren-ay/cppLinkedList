#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Node {
  public:
    T getValue();
    void setValue(T);
    Node* next;
    Node();
  private:
    T data;
};

template <typename T> Node<T>::Node(){
};

template <typename T> T Node<T>::getValue(){
    return data;
};

template <typename T> void Node<T>::setValue(T value){
    data=value;
};

/************************************************* STACK ********************************************************/
template<typename T>
class Stack{
  private:
    Node<T>* headNode;
    int length;
  public:
    Stack();
    Stack(T);
    T getHead();
    void append(T);
    T pop();
    int getLength();  
};

template <typename T> Stack<T>::Stack(){
    headNode=new Node<T>();
    length=0;
    headNode=NULL;
};

template <typename T> Stack<T>::Stack(T value){
    headNode=new Node<T>();
    length=1;
    headNode->setValue(value);
};

template <typename T> T Stack<T>::getHead(){
    return headNode->getValue();
};

template <typename T> void Stack<T>::append(T value){
    Node<T>* tempNode = new Node<T>();
    tempNode->setValue(value);
    tempNode->next=headNode;
    headNode=tempNode;
};


template <typename T> T Stack<T>::pop(){
    Node<T>* tempNode = new Node<T>();
    tempNode->setValue(headNode->getValue());
    headNode=headNode->next;
    return tempNode->getValue();
}

template <typename T> int Stack<T>::getLength(){
    return length;
}



/************************************** queue *********************************/
template<typename T>
class queue
{
private:
    Node<T>* headNode;
    int length;
public:
    queue();
};

template <typename T> queue<T>::queue(){

};



/*
template <typename T> void Stack<T>::insertByIndex(int number, T value){
    Node<T> tempNode = new Node<T>();
    if (number<=length)
        {
            tempNode = &headNode;
            for (size_t i = 0; i < number; i++)
            {
                &tempNode = tempNode.next;
            }
            
            length++;
        }
};
*/


int main() {
    int sayi = 15;
    Stack<int>* denemeStack = new Stack<int>(sayi);
    cout << denemeStack->getHead();
    sayi=66;
    denemeStack->append(sayi);
    denemeStack->pop();
    cout << "\n\n" << denemeStack->getHead();
    return 0;
};