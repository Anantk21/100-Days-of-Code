#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
class Solution {
public:
    int maxCoins(std::vector<int>& piles) {      
        int maxi = 0 ;
        std::sort(piles.begin(), piles.end());
        int start = 0 ; 
        int end = piles.size() - 1;
        while(start++ < piles.size() / 3) // loop will run piles.size()/3 times as 3 piles are taken at a time  
        {
            maxi += piles[end - 1];
            end = end - 2;
        }
        return maxi;      
    }
};

int main() {
    // You can test your Solution class here if needed
     std::vector<int> testPiles = {4, 3, 6, 7, 1, 2, 8};
    
    Solution solution;
    int maxCoins = solution.maxCoins(testPiles);

    std::cout << "Maximum number of coins: " << maxCoins << std::endl;

    return 0;
}
