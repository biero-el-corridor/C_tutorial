//source 
//https://www.geeksforgeeks.org/linked-list-set-1-introduction/
// A simple C program to introduce
// a linked list
#include <stdio.h>
#include <stdlib.h>

struct Node {
    //definitions of int 
	int data;

    //definitions of the pointer that point a memory locations 
	struct Node* next;
};

//creations of a funtions that take in parameter the pointer of the chained link
void printlist(struct Node* n){
    int conteur = 0; 
    while (n != NULL)
    {   
        printf("%d\n", n); 
        //print de la valeur data dans la chaine actuelle de la liste chainée 
        printf("%d\n", n->data); 
        //n passe a la suite de la liste chainée 
        n = n->next; 
        conteur += 1; 
    } 
}


// Program to create a simple linked
// list with 3 nodes
int main()
{
    //definitions of the 3 memory area
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;

	// allocate 3 nodes in the heap
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
    
	/* Three blocks have been allocated dynamically.
	We have pointers to these three blocks as head,
	second and third	
	head		 second		 third
		|			 |			 |
		|			 |			 |
	+---+-----+	 +----+----+	 +----+----+
	| # | # |	 | # | # |	     | # | # |
	+---+-----+	 +----+----+	 +----+----+
	
# represents any random value.
Data is random because we haven’t assigned
anything yet */

	head->data = 1; // assign data in first node
	head->next = second; // Link first node with
	// the second node

	/* data has been assigned to the data part of the first
	block (block pointed by the head). And next
	pointer of first block points to second.
	So they both are linked.

	head		 second		 third
		|			 |			 |
		|			 |			 |
	+---+---+	 +----+----+	 +-----+----+
	| 1 | o----->| # | # |	 | # | # |
	+---+---+	 +----+----+	 +-----+----+
*/

	// assign data to second node
	second->data = 2;

	// Link second node with the third node
	second->next = third;

	/* data has been assigned to the data part of the second
	block (block pointed by second). And next
	pointer of the second block points to the third
	block. So all three blocks are linked.

	head		 second		 third
		|			 |			 |
		|			 |			 |
	+---+---+	 +---+---+	 +----+----+
	| 1 | o----->| 2 | o---> | # | # |
	+---+---+	 +---+---+	 +----+----+*/

	third->data = 3; // assign data to third node
	third->next = NULL;
    
	/* data has been assigned to data part of third
	block (block pointed by third). And next pointer
	of the third block is made NULL to indicate
	that the linked list is terminated here.

	We have the linked list ready.

		head
			|
			|
		+---+---+	 +---+---+	 +----+------+
		| 1 | o----->| 2 | o-----> | 3 | NULL |
		+---+---+	 +---+---+	 +----+------+	
	
	
	Note that only head is sufficient to represent
	the whole list. We can traverse the complete
	list by following next pointers. */
    printlist(head);
    
	return 0;
}
