#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Handle edge case where the list is empty
        if (head == nullptr) {
            return nullptr;
        }
        
        // Remove leading nodes with the target value
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        
        // Remove remaining nodes with the target value
        ListNode* curr = head;
        while (curr != nullptr && curr->next != nullptr) {
            if (curr->next->val == val) {
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }
        
        return head;
    }
};

int main() {
    // Read the number of test cases
    int t;
    std::cin >> t;
    
    while (t--) {
        // Read the input for each test case
        int n, val;
        std::cin >> n >> val;
        
        // Create the linked list
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        for (int i = 0; i < n; i++) {
            int num;
            std::cin >> num;
            
            ListNode* newNode = new ListNode(num);
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        
        // Call the solution function
        Solution solution;
        ListNode* result = solution.removeElements(head, val);
        
        // Print the result
        ListNode* curr = result;
        while (curr != nullptr) {
            std::cout << curr->val << " ";
            curr = curr->next;
        }
        std::cout << std::endl;
        
        // Clean up the memory
        curr = result;
        while (curr != nullptr) {
            ListNode* temp = curr;
            curr = curr->next;
            delete temp;
        }
    }
    
    return 0;
}