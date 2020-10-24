#include <iostream>
#include "src/structure.h"

int main() {
    structure s;
    structure s2;
    s.set("a", "a");
    s.set("c", 'a');
    s.set("b", 3);
    s2.set("my_set", 5);
    s2.set("my_set2", 5.32f);
    s.set("inner_structure", s2);
    s.set("inner_structure_2", s);
    std::cout << (std::string)s << std::endl;
    return EXIT_SUCCESS;
}