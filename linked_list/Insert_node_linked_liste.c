//in this exemple we seen how to insert a node in a linke list
//a node can be added in 3 way 
    //at the front of the linked list
    //after a given node
    //at the end of the lincked list

//first way add a node at the begening of the linked list 

#include <stdio.h>
#include <stdlib.h>
struct Node{
    //définitions de la donnée 
    int data; 
    //pointe sur le futur emplacmeent via le pointeur
    struct Node *next; 
};

//fonctions de print du contenue de la list chainée
int PrintList(struct Node* n){
    //temps que la valeur du pointeur next n'est pas egal a null
    while (n != NULL)
    {
        printf("%d\n", n->data); 
        printf("%d\n", n->next); 
        //on passe a la prochaine liste via le pointeur de fin 
        n = n->next; 
    }
}

//ajout de la jonctions pour ajouter un noeud (liste) en début de chaine
void push(struct Node** head_ref, int new_data){

    //définitions de la taille du nouveaux neud 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 

    //new data récupére les donnée de new_node
    new_node->data = new_data; 

    //le pointeur de la nouvelle liste pointe vers le head (donc le 1er emplacment de la liste chainée)
    //mais du coup si on pointe sur le 1er element il devient le deuxiéme
    new_node->next = (*head_ref); 

    //je ne cmprend pas celuis la 
    (*head_ref) = new_node; 
}


void insertAfter(struct Node* prev_node, int new_data){

    //verifications if the node pointe or have the NULL value 
    //cwe whont whant the null value because that mean this is the last list 
    if(prev_node == NULL){
        printf("whe whant to insert in the middle not at the end bro"); 
        return;
    }
    //alocations of memory area for each iterations of new_node 
    //definitions of the size of new_node 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 

    //attributions of data in the new node
    new_node->data = new_data; 

    //the new node point to the previous node
    new_node->next = prev_node->next; 

    //prev_node = new_node->next; 
    prev_node->next = new_node; 
}


int main(){
    //créations d'une structure qui ne vaut rien 
    struct Node* second = NULL; 
    struct Node* head = NULL; 
    struct Node* third = NULL;
    struct Node* fourght = NULL; 
    //apelle de la fontions push 
    //le 1er agument pointe vers le numero de l'emplacment mémoire de head
    //le deuxiéme argument et la valeur de data
    push(&second,2);
    push(&head,0); 
    push(&third,3); 
    push(&fourght,4); 

    //insertAfter(third->next,6);
    PrintList(head); 
}