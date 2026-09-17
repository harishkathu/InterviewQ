// We define the macro differently here
#define MULTIPLIER 2
#include "shared.hpp"
#include <iostream>

inline void Calculator::compute() {
    std::cout << "[Main] Result: " << (5 * MULTIPLIER) << "\n";
}

int main() {
    Calculator calc;
    
    calc.compute();         // Expects to print 10 (5 * 2)
    trigger_first(calc);    // Expects to print 50 (5 * 10)
    
    return 0;
}

