cmake_minimum_required(VERSION 3.14)
project(FactoryPattern)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_library(FactoryPattern STATIC src/Tank.cpp src/GameFactory.cpp src/Game.cpp)

add_executable(main src/main.cpp)
target_link_libraries(main FactoryPattern)

# Simple tests without GTest
add_executable(test_Tank test/test_Tank.cpp)
target_link_libraries(test_Tank FactoryPattern)

add_executable(test_GameFactory test/test_GameFactory.cpp)
target_link_libraries(test_GameFactory FactoryPattern)

# Add custom test targets
add_custom_target(run_tests
    COMMAND echo "Running Tank test..." && ./test_Tank
    COMMAND echo "Running GameFactory test..." && ./test_GameFactory
    DEPENDS test_Tank test_GameFactory
    COMMENT "Running all tests"
)
