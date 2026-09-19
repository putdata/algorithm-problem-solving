/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct cmp {
    bool operator()(ListNode* a, ListNode* b) const {
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
        for (auto it : lists) if (it) pq.push(it);
        if (pq.empty()) return nullptr;
        ListNode* node = pq.top(); pq.pop();
        ListNode* cur = node;
        if (node->next) pq.push(node->next);
        while (!pq.empty()) {
            cur = cur->next = pq.top();
            pq.pop();
            if (cur->next) pq.push(cur->next);
        }
        return node;
    }
};