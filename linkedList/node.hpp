template <typename T>
class Node
{
public:
    T getValue();
    void setValue(T value);
    Node *next;
    Node();
    Node(T value);

private:
    T data;
};

template <typename T>
Node<T>::Node(){};

template <typename T>
Node<T>::Node(T value)
{
    data = value;
}

template <typename T>
T Node<T>::getValue()
{
    return data;
};

template <typename T>
void Node<T>::setValue(T value)
{
    data = value;
};