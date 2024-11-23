#ifndef NODE_H
#define NODE_H

#include "ChainLink.h"

class Node {
public:
    ChainLink* data;   
    Node* next;        

     
    Node(ChainLink* data, Node* next = nullptr);
 
    Node* next_node();
 
    ChainLink* data_node();
};

#endif 
