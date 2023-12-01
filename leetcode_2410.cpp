#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int matchPlayersAndTrainers(std::vector<int>& players, std::vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int i = 0, j = 0, cnt = 0;

        while (i < players.size() && j < trainers.size()) {
            if (players[i] <= trainers[j]) {
                i++;
                j++;
                cnt++;
            } else {
                j++;
            }
        }
        return cnt;
    }
};

int main() {
    // Example usage
    std::vector<int> players = {3, 1, 4, 2};
    std::vector<int> trainers = {2, 4, 1, 3};
    
    Solution solution;
    int result = solution.matchPlayersAndTrainers(players, trainers);
    
    // Print the result (you can modify this based on your requirements)
    std::cout << "Number of matches: " << result << std::endl;

    return 0;
}
