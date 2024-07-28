class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    //     auto letter = upper_bound(letters.begin(), letters.end(), target);
    // if ( letter == letters.end() ) return letters[0];
    // return *letter; 

    for(int i=0;i<letters.size();i++)
        {
            if(target<letters[i])
            return letters[i];
        }
        return letters[0];
    }
};