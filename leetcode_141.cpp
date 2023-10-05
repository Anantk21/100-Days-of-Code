#include <iostream>

// Define the ListNode structure
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head;

        while (slow != nullptr && fast != nullptr) {
            fast = fast->next;
            if (fast != nullptr) {
                fast = fast->next;
            }
            slow = slow->next;

            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    // You can create a linked list and test the hasCycle function here.
    Example:
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = head;  // Create a cycle

    Solution solution;
    bool hasCycle = solution.hasCycle(head);
    std::cout << "Has cycle: " << hasCycle << std::endl;

    return 0;
}
