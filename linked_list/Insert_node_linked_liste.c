//in this exemple we seen how to insert a node in a linke list
//a node can be added in 3 way 
    //at the front of the linked list
    //after a given node
    //at the end of the lincked list

//first way add a node at the begening of the linked list 

#include <stdio.h>

struct Node{

    //définitions de la donnée 
    int data; 
    //pointe sur le futur emplacmeent via le pointeur
    struct Node *next; 
};

int main(){
    //créations de l'emplacment mémoire de head et node 
    struct Node* head = NULL; 
    struct Node* second = NULL; 

    //définitions de la taille de l'emplacement mémoire aloué a head et node
    head = (struct Node*)malloc(sizeof(struct Node)); 
    second = (struct Node*)malloc(sizeof(struct Node)); 

    //définitions le la variable de type int data a 5
    head->data = 5; 
    //définitions du pointeur de la chaine a second 
    //la suite de la liste seras donc second 
    head->next = second;

    second->data = 10; 
    second->next = NULL;  

}