#include <stdio.h>
#include <stdlib.h>
#include <node.h>


Node* reverse(Node *head)
{
   Node *temp;

   if(head == NULL || head->next == NULL) {
	return head;
   }

  /* keep track of node */
   temp = reverse(head->next);
   head->next->next = head;
   head->next = NULL;

   return temp;
}

