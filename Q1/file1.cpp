// We define a macro BEFORE including the header to change the function behavior
#define MULTIPLIER 10
#include "shared.hpp"
#include <iostream>

inline void Calculator::compute() {
    std::cout << "[File 1] Result: " << (5 * MULTIPLIER) << "\n";
}

void trigger_first(Calculator& calc) {
    calc.compute(); // Compiles expecting it to multiply by 10
}

