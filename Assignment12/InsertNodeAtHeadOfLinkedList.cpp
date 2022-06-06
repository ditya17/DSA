SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* temp =new SinglyLinkedListNode(data);

    temp->data=data;
    if(llist!=NULL){
        temp->next=llist;
        llist=temp;
    }
    llist=temp;
    return llist;
}
