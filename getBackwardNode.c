/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    int index = 0;
    Node *cur = head;
    Node *res = head;
    
    //Solution 1: Loop once
    /*while(cur!=NULL){
        cur = cur->next;
        if(index++ > positionFromTail) {
            res = res->next;
        }
    }*/
    
   // Solution 2: loop find length, loop find node 
    while(cur->next!=NULL) {
        cur = cur->next;
        index++;
    }
    
    cur = head;
    
    while(cur != NULL) {
       if(index == positionFromTail){
            break;
        }
         index--;
         cur = cur->next;

    }

    return cur->data;
}

