#include <iostream>
#include <string>

void printSubsets(const std::string& set, std::string subset, int index) {
    int n = set.length();

    // Base case: when index reaches the end of the set
    if (index == n) {
        std::cout << subset << " ";
        return;
    }

    // Recursive case: include current character in the subset and make a recursive call
    printSubsets(set, subset + set[index], index + 1);

    // Recursive case: exclude current character from the subset and make a recursive call
    printSubsets(set, subset, index + 1);
}

void printAllSubsets(const std::string& set) {
    std::string subset = "";
    int index = 0;
    printSubsets(set, subset, index);
}

int main() {
    std::string set;
    std::cin>>set;
    printAllSubsets(set);

    return 0;
}

