/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    Node *curA = headA;
    Node *curB = headB;
    
    while(curA != curB){
        
        if(curA->next == NULL){
            curA = headB;
        } else {
            curA = curA->next;
        }
        
        if(curB->next == NULL){
            curB = headA;
        } else {
            curB = curB->next;
        }
    }
    
    return curA->data;
}
