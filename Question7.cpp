#include <iostream>
#include <string>
using namespace std;

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void printPermutations(string str, int start, int end) {
    if (start == end) {
        cout << str << " ";
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(str[start], str[i]);
        printPermutations(str, start + 1, end);
        swap(str[start], str[i]); // backtrack
    }
}

int main() {
    string str ;
    cin>>str;
    cout << str << " ";
    printPermutations(str, 0, str.length() - 1);

    return 0;
}

