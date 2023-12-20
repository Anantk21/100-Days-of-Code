#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        if(prices[0] + prices[1] > money) {
            return money;
        }
        return (money - (prices[0] + prices[1]));
    }
};

int main() {
    Solution s;
    vector<int> prices = {5, 7, 3, 1};
    int money = 10;
    cout << "Remaining money after buying chocolates: " << s.buyChoco(prices, money) << endl;
    return 0;
}
