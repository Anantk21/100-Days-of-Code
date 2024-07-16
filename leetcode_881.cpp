
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int numRescueBoats(std::vector<int>& people, int limit) {
        std::sort(people.begin(), people.end());
        int i = 0, j = people.size() - 1, count = 0;
        while (i <= j) {
            if (people[i] + people[j] <= limit) i++;
            count++;
            j--;
        }
        return count;
    }
};

int main() {
    Solution solution;
    std::vector<int> people = {3, 2, 2, 1};
    int limit = 3;
    int result = solution.numRescueBoats(people, limit);
    std::cout << "Number of boats required: " << result << std::endl;
    return 0;
}
