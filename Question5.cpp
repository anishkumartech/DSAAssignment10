#include <iostream>
using namespace std;

int countSubstring(const string& str) {
    int count = 0;
    int n = str.length();

    // Iterate through all substrings
    for (int i = 0; i < n; i++) {
        // Each character in the string is a valid substring
        count++;

        // Expand around the current character and count valid substrings
        int left = i - 1;
        int right = i + 1;

        while (left >= 0 && right < n && str[left] == str[right]) {
            count++;
            left--;
            right++;
        }
    }

    return count;
}

int main() {
    string str ;
    cin >>str;
    int count = countSubstring(str);
    cout  << count << endl;

    return 0;
}

