class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 ;
        ListNode* temp2 = new ListNode;
        temp1 = temp2;
        if (list1 == NULL ) return list2;
        if (list2 == NULL ) return list1;
        if (list1->val <= list2->val){
            temp2->val = list1->val;
            list1 = list1->next;
        }
        else {
            temp2->val = list2->val;
            list2 = list2->next;
        }
        while (list1 != NULL && list2 != NULL){
            if (list1->val <= list2->val){
                temp2->next = list1;
                list1 = list1->next;
            }
            else {
                temp2->next = list2;
                list2 = list2->next;
            }
            temp2 = temp2->next;
        }
        if (list1 != NULL){
            temp2->next = list1;
        }
        else {
            temp2->next = list2;
        }
        return temp1;
    }
};
