#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string paragraph;
    getline(cin, paragraph);
    unordered_map<string, int> wordFreq;
    string word;

    for (char ch:paragraph) {
        if (isalpha(ch)) {
            word += tolower(ch);
        } else {
            if (!word.empty()) {
                wordFreq[word]++;
                word.clear();
            }
        }
    }

    if (!word.empty()) {
        wordFreq[word]++;
    }

    cout << "words:" << endl;
    for (const auto& pair : wordFreq) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
