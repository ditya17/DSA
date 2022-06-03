void printLinkedList(SinglyLinkedListNode* head) {
    if (head == NULL) {
        cout<<0;
    }
    else {
        while(head != NULL){
            cout<<head->data<<endl;
            head = head->next;            
        }
    }
};
