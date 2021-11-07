//french ressource for malloc
#include <stdio.h>
#include <stdlib.h>

void main(){

    /*
    l'actions d'utilisations de malloc peut se diviser en 3 
        1-crée un pointeur vers un emplacment mémoire 
        2-définir la taille de l'emplacment mémoire via malloc 
        3-"liberer la zone mémoire avec free"
    */


    // 1
    int *memoireAllouee;
    
    // 2
    memoireAllouee = malloc(sizeof(int)); 

    //P.S la méthode 1 et 2 peuve se faire en une lign e

    int *nouvelleMemoire; 
    nouvelleMemoire = malloc(sizeof(int)); 

    //le resultat seras 4 car la taille d'un int en octed et de 4 
    printf("%d\n",sizeof(memoireAllouee)); 
    printf("%d\n", *memoireAllouee); 
    printf("%ld\n", sizeof(nouvelleMemoire)); 
    // 3
    free(memoireAllouee); 
}