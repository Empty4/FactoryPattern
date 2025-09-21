cmake_minimum_required(VERSION 3.14)
project(FactoryPattern)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_library(FactoryPattern STATIC src/Tank.cpp src/GameFactory.cpp src/Game.cpp)

add_executable(main src/main.cpp)
target_link_libraries(main FactoryPattern)

enable_testing()
find_package(GTest REQUIRED)

add_executable(test_Tank test/test_Tank.cpp)
target_link_libraries(test_Tank FactoryPattern GTest::GTest GTest::Main)
add_test(NAME test_Tank COMMAND test_Tank)

add_executable(test_GameFactory test/test_GameFactory.cpp)
target_link_libraries(test_GameFactory FactoryPattern GTest::GTest GTest::Main)
add_test(NAME test_GameFactory COMMAND test_GameFactory)
