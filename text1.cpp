#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int k = 0;
        
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                nums1[k] = nums1[i];
                i++;
                k++;
            } else {
                nums1[k] = nums2[j];
                j++;
                k++;
            }
        }
        
        while (i < m) {
            nums1[k] = nums1[i];
            i++;
            k++;
        }
        
        while (j < n) {
            nums1[k] = nums2[j];
            k++;
            j++;
        }
    }
};

int main() {
    // Test the merge method
    Solution solution;
    
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // Sorted array with extra space
    int m = 3;
    
    vector<int> nums2 = {2, 5, 6}; // Sorted array
    int n = 3;
    
    solution.merge(nums1, m, nums2, n);
    
    // Print the merged array
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
