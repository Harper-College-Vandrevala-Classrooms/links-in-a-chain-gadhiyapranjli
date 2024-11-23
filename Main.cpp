#include <iostream>
#include "ChainLink.h"
#include "Node.h"
using namespace std;

int main() {
    
    ChainLink link_one("red");
    ChainLink link_two("blue");
    ChainLink link_three("green");

    Node node_one(&link_one);
    Node node_two(&link_two);
    Node node_three(&link_three);

    
    node_one.next = &node_two;
    node_two.next = &node_three;

    Node* retrieved_node = node_one.next_node();
    ChainLink* retrieved_link = retrieved_node->data_node();
    cout << "Returns the second ChainLink in the list: " << retrieved_link->get_color() << endl;  // Expected: blue

   
    Node* another_retrieved_node = node_one.next_node()->next_node();
    ChainLink* another_retrieved_link = another_retrieved_node->data_node();
    cout << "Returns the second ChainLink in the list: " << another_retrieved_link->get_color() << endl;  // Expected: green

    return 0;
}
