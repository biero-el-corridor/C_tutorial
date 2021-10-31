int main(){
    typedef struct Element Element;
    struct Element
    {
        int nombre = 4;
        printf("%d",nombre);
        Element *suivant;
    };
}