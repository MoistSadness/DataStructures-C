/***********************************************************************************************
   
   Since C does not have a built in Data Structure Libraries, I created my own

   Linked list source code graciously "borrowed" and modified from the following:
      https://www.tutorialspoint.com/data_structures_algorithms/linked_list_program_in_c.htm

   Currently used as a singly linked list, will make it doubly linked later

***********************************************************************************************/

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>

/****************************************************************
 * Node struture for all data structures
 * Stores an integer as well as it's position in the linked list
 ***************************************************************/
struct node {
   int data;
   int key;
   struct node* next;
   struct node* previous;
};


/****************************************************************
 * Prints the contents of the linked list
 ***************************************************************/
void printList(struct node* head) {
   struct node *ptr = head;
   printf("\n[ ");
	
   //start from the beginning
   while(ptr != NULL) {
      printf("(%d,%d) ",ptr->key,ptr->data);
      ptr = ptr->next;
   }
	
   printf(" ]");
}


/****************************************************************
 * Adds a new node at the end of the linked list
 ***************************************************************/
void append(struct node* head, int data) {
   int keyCounter = 0;
	
   // Go to the end of the list
   struct node* tempHead = head;
   while(tempHead -> next != NULL){
      tempHead = tempHead -> next;
      keyCounter++;
   }

   //create a new node
   struct node *link = (struct node*) malloc(sizeof(struct node));
	
   link -> key = keyCounter;
   link -> data = data;

   // Set new node as the new final node
   tempHead -> next = link;
}


/*
// Inserts at the given key
// Not ready yet

void insert(struct node* head, int key, int data){
   //create a new node
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->key = key;
   link->data = data;
}
*/

/*
//delete first item
struct node* deleteFirst(struct node* head) {

   //save reference to first link
   struct node *tempLink = head;
	
   //mark next to first link as first 
   head = head->next;
	
   //return the deleted link
   return tempLink;
}
*/


/****************************************************************
 * Checks if the linked list is empty
 ***************************************************************/
bool isEmpty(struct node* head) {
   return head == NULL;
}


/****************************************************************
 * Returns the number of elements in the linked list
 ***************************************************************/
int length(struct node* head) {
   int length = 0;
   struct node *current = head;
	
   while (current -> next != NULL) length++;
	
   return length;
}


/****************************************************************
 * Searches linked list to a specific key
 * Returns the node which has the desired data value
 *    otherwise return null
 ***************************************************************/
struct node* find(struct node* head, int key) {

   //start from the first link
   struct node* current = head;

   //if list is empty
   if(head == NULL) {
      return NULL;
   }

   //navigate through list
   while(current->key != key) {
      //if it is last node
      if(current->next == NULL) {
         return NULL;
      } else {
         //go to next link
         current = current->next;
      }
   }      
	
   //if data found, return the current Link
   return current;
}

/*
//delete a link with given key
struct node* delete(struct node* head, int key) {

   //start from the first link
   struct node* current = head;
   struct node* previous = NULL;
	
   //if list is empty
   if(head == NULL) {
      return NULL;
   }

   //navigate through list
   while(current->key != key) {

      //if it is last node
      if(current->next == NULL) {
         return NULL;
      } else {
         //store reference to current link
         previous = current;
         //move to next link
         current = current->next;
      }
   }

   //found a match, update the link
   if(current == head) {
      //change first to point to next link
      head = head->next;
   } else {
      //bypass the current link
      previous->next = current->next;
   }    
	
   return current;
}
*/

/*

      NOT READY YET

void sort(struct node* head) {

   int i, j, k, tempKey, tempData;
   struct node *current;
   struct node *next;
	
   int size = length();
   k = size ;
	
   for ( i = 0 ; i < size - 1 ; i++, k-- ) {
      current = head;
      next = head->next;
		
      for ( j = 1 ; j < k ; j++ ) {   

         if ( current->data > next->data ) {
            tempData = current->data;
            current->data = next->data;
            next->data = tempData;

            tempKey = current->key;
            current->key = next->key;
            next->key = tempKey;
         }
			
         current = current->next;
         next = next->next;
      }
   }   
}

void reverse(struct node** head_ref) {
   struct node* prev   = NULL;
   struct node* current = *head_ref;
   struct node* next;
	
   while (current != NULL) {
      next  = current->next;
      current->next = prev;   
      prev = current;
      current = next;
   }
	
   *head_ref = prev;
}
*/
