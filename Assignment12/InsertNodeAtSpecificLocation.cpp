SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data) ;
    temp->data = data;
    SinglyLinkedListNode* after;  
    SinglyLinkedListNode* temp2 ;
    temp2=llist;
    if(llist==NULL){
        temp2=temp;
    }
    int i =1;
    while(i<position){
        llist=llist->next;
        i++;
    }
    after=llist->next;
    llist->next = temp;
    temp->next = after;
return temp2;
    
}
