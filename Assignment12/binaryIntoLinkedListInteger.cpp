class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp;
        temp = head;
        int count =0;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        int decimal =0;
        while(temp!=NULL){
            if(temp->val==1){
                decimal = decimal + pow(2,count-1);
            }
            count--;
            temp=temp->next;  
        }
    return decimal;
    }
};
