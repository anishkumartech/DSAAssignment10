#include <iostream>
using namespace std;

int stringLength(const char* str) {
    // Base case: when the end of the string is reached
    if (*str == '\0') {
        return 0;
    }

    // Recursive case: increment the length by 1 and make a recursive call
    return 1 + stringLength(str + 1);
}

int main() {

    const int bufferSize = 100;
    char buffer[bufferSize];

    cin.getline(buffer, bufferSize);

    const char* str = buffer;

    int length = stringLength(str);
    cout << "Length of the string: " << length << endl;

    return 0;
}

