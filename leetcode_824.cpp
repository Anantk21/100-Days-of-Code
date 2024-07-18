#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isValid(char c) {
        static const unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        return vowels.count(c) > 0;
    }

    string toGoatLatin(string sentence) {
        string result;
        string suffix = "a";
        istringstream iss(sentence);
        string word;
        
        while (iss >> word) {
            if (isValid(word[0])) {
                result += word + "ma" + suffix;
            } else {
                result += word.substr(1) + word[0] + "ma" + suffix;
            }
            suffix += 'a';
            if (iss.peek() != EOF) {
                result += ' ';
            }
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    string sentence = "I speak Goat Latin";
    string result = solution.toGoatLatin(sentence);
    cout << "Original sentence: " << sentence << endl;
    cout << "Goat Latin sentence: " << result << endl;
    
    return 0;
}
