#include <sstream>
#include "structure.h"

structure::operator std::string() const {
    std::stringstream s;
    s << "{\n";
    for (auto& elem : elements) {
        s << "\"" << elem.first << "\": ";
        if (elem.second.get_is_special()) {
            s << elem.second.get_value();
        } else {
            s << "\"" << elem.second.get_value() << "\"";
        }
        if (&elem != &*std::prev(elements.end())) s << ",";
        s << "\n";
    }
    s << "}";
    return s.str();
}

void structure::set(std::string &&name, element &&value) {
    if (elements.find(name) != elements.end()) elements.at(name) = value;
    else elements.insert({name, value});
}

element structure::get(std::string &&name) const {
    return elements.at(name);
}
