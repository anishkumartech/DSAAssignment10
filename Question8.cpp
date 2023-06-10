#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int countConsonants(string str) {
    int count = 0;
    for (char ch : str) {
        if (isalpha(ch) && !isVowel(ch))
            count++;
    }
    return count;
}

int main() {
    string str ;
    //cin>>str;
    getline(cin, str);
    int consonantCount = countConsonants(str);
    cout   << consonantCount << endl;
    return 0;
}

