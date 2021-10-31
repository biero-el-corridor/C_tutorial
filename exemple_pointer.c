
#include <stdio.h>

int main(){

    int a = 5; 
    int *PointerToA;
    char* hello =  "azer";
    char arrai[5] = "world";

    //le pointeur et egal a la valeur de l'emplacement 
    PointerToA = &a;
    
    char *PointeurToArrai = arrai; 
    
    //va afficher le contenue de a (5 ducoup)
    printf("%d \n",*PointerToA);

    //va afficher l'emplacmeent mémoire de PointerToA 
    printf("%d\n",&PointerToA);

    //print de la value de hello 
    printf("%s\n",hello);
    
    //print d'un array a partir d'un pointeur
    printf("%s",PointeurToArrai);
    
    return 0; 

}