#include "Node.h"

Node::Node(ChainLink* data, Node* next) {
    this->data = data;
    this->next = next;
}

Node* Node::next_node() {
    return this->next;
}

ChainLink* Node::data_node() {
    return this->data;
}
