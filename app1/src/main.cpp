#include <iostream>
#include "add.h"
#include "../tests/io.cpp"

int main(){
    int result = add(5, 5);
    std::cout << "result : " << result << std::endl;

//     std::vector<std::pair<int, int>> inputNumbers = readInputNumbers("/home/user1/Documents/works/jenkins-test/jenkins-test/app1/tests/test_numbers.txt");
//     for (const auto& nums : inputNumbers) {
//         std::cout << " nums.first : " << nums.first << std::endl;
//     }
}