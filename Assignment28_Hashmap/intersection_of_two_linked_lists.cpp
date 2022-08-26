class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set <ListNode* > S;
        ListNode *temp1;
        ListNode *temp2;
        temp1 = headA;
        temp2 = headB;
        while (temp2 != NULL){
            S.insert(temp2);
            temp2 = temp2->next;
        }
        while (temp1 != NULL){
           if ( S.find(temp1) != S.end()) return temp1;
            else if ( S.find(temp1) == S.end()) {
                temp1 = temp1->next;
            }
        }
        return NULL;
    }
};
