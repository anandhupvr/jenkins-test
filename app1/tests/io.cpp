#include <fstream>
#include <sstream>
#include <vector>

std::vector<std::pair<int, int>> readInputNumbers(const std::string& filename) {
    std::vector<std::pair<int, int>> inputNumbers;
    std::ifstream file(filename);
    if (!file.is_open()) {
        // Handle file not found or other errors
        return inputNumbers;
    }
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        int num1, num2;
        char comma;
        if (!(iss >> num1 >> comma >> num2)) {
            // Handle invalid input format
            continue;
        }
        inputNumbers.push_back({num1, num2});
    }
    file.close();
    return inputNumbers;
}