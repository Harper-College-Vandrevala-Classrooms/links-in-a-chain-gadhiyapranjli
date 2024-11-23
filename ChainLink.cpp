#include "ChainLink.h"

ChainLink::ChainLink(string color) {
    this->color = color;
}

string ChainLink::get_color() {
    return this->color;
}
