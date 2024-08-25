class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>arr(26,0);
        int n = sentence.length();
        for(char &ch:sentence){
            int index = ch-'a';
            arr[index]++;
        }  

        for(int &cnt:arr){
            if(cnt==0){
                return false;
            }
        }
        return true;
    }
};