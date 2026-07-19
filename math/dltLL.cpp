#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // Safe check for 0 or 1 node. 
        // Returning nullptr lets LeetCode's engine handle the memory cleanup safely.
        if (head == nullptr || head->next == nullptr) {
            return nullptr; 
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        // Move fast by 2 steps and slow by 1 step
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // 'slow' is now exactly the middle node.
        // 'prev' is the node right before it.
        
        // Step 1: Safely bypass the middle node first
        prev->next = slow->next;

        // Step 2: Delete the isolated middle node
        delete slow;

        // Step 3: Return the safely modified head
        return head;
    }
};

int main(){
    
    return 0;
}