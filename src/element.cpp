#include "element.h"

std::string element::get_value() const {
    return val;
}

bool element::get_is_special() const {
    return is_special;
}
