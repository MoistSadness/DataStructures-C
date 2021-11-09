/****************************************************************
 * 
 *          Driver Code for linked list
 * 
 ***************************************************************/


# include "stdio.h"
# include "stdbool.h"

# include "DataStructures.h"

void linkedListTester(){
   printf("\nDriver code to test my linked list library\n\n");

   struct node* head;                     // Creating the head node

   // Should be empty
   if (isEmpty(head) == true) 
      printf("Linked list is empty\n");
   else printf("Linked list has Content\n");

   // Adding stuff to the list
   append(head, 69);
   append(head, 70);
   append(head, 71);
   append(head, 72);
   append(head, 73);
   append(head, 74);
   append(head, 75);

   // Should have content
   if (isEmpty(head) == true) 
      printf("Linked list is empty\n");
   else printf("Linked list has Content\n");

   //Printing the Linked List
   printList(head);



   /*
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(6,56); 

   printf("Original List: "); 
	
   //print list
   printList();

   while(!isEmpty()) {            
      struct node *temp = deleteFirst();
      printf("\nDeleted value:");
      printf("(%d,%d) ",temp->key,temp->data);
   }  
	
   printf("\nList after deleting all items: ");
   printList();
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(6,56);
   
   printf("\nRestored List: ");
   printList();
   printf("\n");  

   struct node *foundLink = find(4);
	
   if(foundLink != NULL) {
      printf("Element found: ");
      printf("(%d,%d) ",foundLink->key,foundLink->data);
      printf("\n");  
   } else {
      printf("Element not found.");
   }

   delete(4);
   printf("List after deleting an item: ");
   printList();
   printf("\n");
   foundLink = find(4);
	
   if(foundLink != NULL) {
      printf("Element found: ");
      printf("(%d,%d) ",foundLink->key,foundLink->data);
      printf("\n");
   } else {
      printf("Element not found.");
   }
	
   printf("\n");
   sort();
	
   printf("List after sorting the data: ");
   printList();
	
   reverse(&head);
   printf("\nList after reversing the data: ");
   printList();

   */
}


int main(){
   linkedListTester();



    return 0;
}
