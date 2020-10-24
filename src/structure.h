#ifndef JSON_CPP_STRUCTURE_H
#define JSON_CPP_STRUCTURE_H

#include <map>
#include <string>
#include "element.h"

class structure {
public:
    operator std::string() const;
    void set(std::string &&name, element &&value);

private:

    std::map<std::string, element> elements;
};

#endif //JSON_CPP_STRUCTURE_H