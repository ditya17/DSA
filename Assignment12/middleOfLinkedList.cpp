class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp;
        temp = head;
        int count =1;
        while(head->next!=NULL){
            count++;
            head=head->next;
        }  
        int x = (count/2)+1;
        int i=1;
        while(i<x){
            temp=temp->next;
        i++;
        }
    return temp;
    }
};
