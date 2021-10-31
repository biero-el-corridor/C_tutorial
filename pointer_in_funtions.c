#include <stdio.h>
//récuperations de la valeur contenue a l'emplacment mémoire définie 
int reverse(int *ch1, int *ch2){
    //définitions de la variable intermédiaire 
    int inter = *ch1;
    *ch1 = *ch2;
    *ch2 = inter;
    printf("chiffre 1 = %d chiffre 2 = %d",*ch1 , *ch2);
    
}


int main(){
    int ch1 = 5;
    int ch2 = 10;
    

    printf("chiffre 1 = %d chiffre 2 = %d\n",ch1 , ch2);
    
    //récupérations du numero de l'emplacement mémoire 
    reverse(&ch1,&ch2);
    
}

