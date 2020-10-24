#include <iostream>
#include "src/structure.h"
#include "src/array.h"

int main() {
    structure s;
    structure s2;
    array arr;
    s.set("a", "a");
    s.set("c", 'a');
    s.set("b", 3);
    s.set("b", 6);
    s2.set("my_set", 5);
    s2.set("my_set2", 5.32f);
    s.set("inner_structure", s2);
    s.set("inner_structure_2", s);
    arr.set("33");
    arr.set("Hello");
    arr.set("World");
    arr.set("Array");
    arr.set(arr);
    arr.set(s2);
    s.set("my_array", arr);
    std::cout << (std::string)s << std::endl;
    std::cout << "===========================\n";
    std::cout << s.get("inner_structure_2").get_value() << std::endl;
    return EXIT_SUCCESS;
}