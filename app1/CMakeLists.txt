add_executable(add src/main.cpp src/add.cpp)

enable_testing()

add_executable(test_add tests/test_add.cpp src/add.cpp)
target_link_libraries(test_add gtest gtest_main)

add_test(NAME SimpleAdditionTest COMMAND test_add)