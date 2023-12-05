#include <iostream>

class Solution {
public:
    int numberOfMatches(int n) {
        int m = 0;
        while(n > 1){
            if(n % 2 != 0){
                m = m + n / 2;
                n = (n / 2) + 1;
            }
            else{
                m = m + n / 2;
                n = n / 2;
            }
        }
        return m;
    }
};

int main() {
    Solution solution;
    
    // Example usage
    int numberOfTeams = 7;
    int result = solution.numberOfMatches(numberOfTeams);
    
    std::cout << "Number of matches for " << numberOfTeams << " teams: " << result << std::endl;

    return 0;
}
