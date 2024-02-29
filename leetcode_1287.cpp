#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int quat = n/4;
        
        for(int i=0; i<n-quat; i++){
            if(arr[i] == arr[i+quat]){
                return arr[i];
            }
        }
        return -1;
    }
};

int main() {
    // Example usage
    Solution solution;
    vector<int> arr = {1, 2, 2, 6, 6, 6, 6, 7, 11,12};
    int result = solution.findSpecialInteger(arr);
    
    if(result != -1) {
        cout << "Special Integer: " << result << endl;
    } else {
        cout << "No special integer found." << endl;
    }

    return 0;
}
