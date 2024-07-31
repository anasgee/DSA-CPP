#include <iostream>
#include <vector>
#include <string> // Include the string header for std::string

using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int> indices;
    for (int i = 0; i < words.size(); i++) {
        if (words[i].find(x) != string::npos) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    // Alternative initialization
    vector<string> words;
    words.push_back("Leetcode");
    words.push_back("Anas");
    words.push_back("Engineer");
    
    char x = 'e';
    
    vector<int> indices = findWordsContaining(words, x);

    // Output the indices
    for (int i=0;i<indices.size();i++) {
        cout << indices[i] << ",";
    }
    cout << endl;

    return 0;
}

