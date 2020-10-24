#ifndef JSON_CPP_ARRAY_H
#define JSON_CPP_ARRAY_H

#include <vector>
#include <string>
#include "element.h"

class array {
public:
    operator std::string() const;
    void set(element &&value);

private:
    std::vector<element> elements;
};

#endif //JSON_CPP_ARRAY_H