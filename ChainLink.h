#ifndef CHAINLINK_H
#define CHAINLINK_H

#include <string>
using namespace std;

class ChainLink {
private:
    string color;

public:
   
    ChainLink(string color);

    string get_color();
};

#endif 
