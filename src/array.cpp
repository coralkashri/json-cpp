#include "array.h"
#include <sstream>

array::operator std::string() const {
    std::stringstream s;
    s << "[\n";
    for (auto& elem : elements) {
        if (elem.get_is_special()) {
            s << elem.get_value();
        } else {
            s << "\"" << elem.get_value() << "\"";
        }
        if (&elem != &*std::prev(elements.end())) s << ",";
        s << "\n";
    }
    s << "]";
    return s.str();
}

void array::set(element &&value) {
    elements.push_back(value);
}
