#include "../include/Tank.h"
#include <iostream>

int main() {
    Tank tank(5, 0);
    
    if (tank.gotShot(5)) {
        std::cout << "TEST PASSED: Tank got shot at position 5" << std::endl;
    } else {
        std::cout << "TEST FAILED: Tank should be hit at position 5" << std::endl;
        return 1;
    }
    
    if (!tank.gotShot(3)) {
        std::cout << "TEST PASSED: Tank not hit at position 3" << std::endl;
    } else {
        std::cout << "TEST FAILED: Tank should not be hit at position 3" << std::endl;
        return 1;
    }
    
    std::cout << "All Tank tests passed!" << std::endl;
    return 0;
}
