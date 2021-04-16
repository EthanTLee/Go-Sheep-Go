#include "catch.hpp"

#include <array>
#include <extern/array_enumerator.hh>
#include <iostream>


TEST_CASE("array enumerator test") {

    std::array<std::array<int, 30>, 10> my_array1;

    for (auto [c, d] : array_helpers::enumarate(my_array1)) {
        std::cout << "c " << c << ", d " << d << "\n";
    }

}