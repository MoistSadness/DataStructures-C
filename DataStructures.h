/****************************************************************
 * 
 *          Header for Data Structures
 * 
 ***************************************************************/

# ifndef DATASTRUCTURES_H
# define DATASTRUCTURES_H

/****************************************************************
 * Node struture for all data structures
 * Stores an integer as well as it's position in the linked list
 ***************************************************************/
typedef struct node {
    int data;
    int key;
    struct node* next;
    struct node* previous;
} node;

/****************************************************************
 * Function Prototypes
 ***************************************************************/
node* init(int data);
void append(node* head, int data);

void printList(node* head);
bool isEmpty(node* head);


# endif
