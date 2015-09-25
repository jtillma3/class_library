#ifndef LLNODE_H
#define LLNODE_H


template <class T>
class LLNode{
private:
    T data;
    LLNode *next;
    LLNode *prev;

public:
    T getData();
    bool isHead();
    bool isTail();
    bool operator<(LLNode<T>&);
    bool operator==(LLNode<T>&);
    bool operator!=(LLNode<T> &);
    bool operator>(LLNode<T>&);
    size_t getDataSize(){};
    void operator=(LLNode<T>&);
    void toString();
    void LLNode(LLNode<T> &); 

};
#endif