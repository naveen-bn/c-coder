/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }

  Recursive solution
*/
Node* MergeLists(Node *headA, Node* headB)
{
    if(headA == NULL && headB == NULL){
        return headA;
    }
    
    if(headA == NULL && headB != NULL){
        return headB;
    }
    
    if(headB == NULL && headA != NULL) {
        return headA;
    }
    
    if(headA->data < headB->data){
        headA->next = MergeLists(headA->next, headB);

    } else if(headA->data > headB->data) {
        Node *temp = headB;
        headB = headB->next;
        temp->next = headA;
        headA = temp;
        headA->next = MergeLists(headA->next, headB);
    }
    return headA;
}
