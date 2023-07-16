#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& A, int k, int x) {
        int left = 0, right = A.size() - k;
        while (left < right) {
            int mid = (left + right) / 2;
            if (x - A[mid] > A[mid + k] - x)
                left = mid + 1;
            else
                right = mid;
        }
        return vector<int>(A.begin() + left, A.begin() + left + k);
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 3, 4, 5,6};
    int k = 3;
    int x = 4;
    
    vector<int> result = solution.findClosestElements(nums, k, x);
    
    cout << "Closest Elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}






