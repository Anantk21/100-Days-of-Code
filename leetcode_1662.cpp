#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n = word1.size();
        int m = word2.size();
        
        string n1 = "";
        for(int i = 0; i < n; i++){
            n1.append(word1[i]);
        }
        
        string n2 = "";
        for(int i = 0; i < m; i++){
            n2.append(word2[i]);
        }
        
        if(n1.length() != n2.length()){
            return false;
        }
        else{
            for(int i = 0; i < n1.length(); i++){
                if(n1[i] != n2[i]){
                    return false;
                }
            }
        }
        return true;
    }
};

// For testing purposes
int main() {
    // Create two vectors of strings
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};

    // Create an instance of the Solution class
    Solution solution;

    // Check if the arrays of strings are equal
    bool result = solution.arrayStringsAreEqual(word1, word2);

    // Print the result
    cout << (result ? "true" : "false") << endl;

    return 0;
}
