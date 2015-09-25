#ifndef LINKED_LIST_HPP
#def LINKED_LIST_HPP

#include "LLNode.h"

template <class T>
class LinkedList{
private:
    LLNode<T> *head;
    LLNode<T> *tail;
    unsigned int length;

public:
    LinkedList LinkedList();
    void ~LinkedList();
    void insertSorted(LLNode &);
    void addToTail(LLNode &);
    void addToHead(LLNode &);
    unsigned int getLength();
    bool isEmpty(void);
    void printList();
    
};



#endif
