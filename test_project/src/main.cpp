#include "my_header_only_lib.hpp"
#include <iostream>

int main () {
    int res;
    int a = 5;
    int b = 3;
    res = my_sum(a, b);
    std::cout << res << std::endl;
}