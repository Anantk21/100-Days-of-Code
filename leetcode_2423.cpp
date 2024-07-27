class Solution {
public:
    bool equalFrequency(string word) {
        int n = word.length();
        vector<int> f(26, 0);

        // Step 1: Count frequency of each character in the word
        for (int i = 0; i < n; i++) {
            f[word[i] - 'a']++;
        }

        // Step 2: Try reducing the frequency of each character by 1 and check if all frequencies are equal
        for (int i = 0; i < 26; i++) {
            vector<int> temp = f;
            if (temp[i] == 0) continue;  // Skip if the character does not exist in the word
            else {
                temp[i]--;  // Reduce the frequency of the character by 1
            }

            // Step 3: Check if all non-zero frequencies are the same
            set<int> st;
            for (auto it : temp) {
                if (it > 0) st.insert(it);
            }
            if (st.size() == 1) return true;  // If all frequencies are equal, return true
        }
        return false;  // If no such modification is found, return false
    }
};
