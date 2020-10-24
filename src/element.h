#ifndef JSON_CPP_ELEMENT_H
#define JSON_CPP_ELEMENT_H

#include <iostream>
#include <custom_concepts.hpp>

class structure;
class array;

class element {
public:
    template<custom_concepts::ToStringable T>
    element(const T &elem) : val(std::to_string(elem)) {
        set_is_special<T>();
    }

    [[nodiscard]] std::string get_value() const;
    [[nodiscard]] bool get_is_special() const;

private:
    std::string val;
    bool is_special = false;

    template <typename T>
    void set_is_special(){
        if constexpr (std::is_same_v<T, structure> || std::is_same_v<T, array>) {
            is_special = true;
        }
    }
};


/*template <typename T>
void element::set_is_special() {
    if constexpr (std::is_same_v<T, structure> || std::is_same_v<T, array>) {
        is_special = true;
    }
}*/

#endif //JSON_CPP_ELEMENT_H