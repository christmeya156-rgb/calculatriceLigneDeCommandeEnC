#include "Main.h"

int main(void){
    
/* Entrées utilisateurs*/
    
        printf("Nombre 1 : ");
        
        while (scanf("%f",&nombreA) != 1){
            printf("Veuillez saisir un nombre valide : ");
            while(getchar()!='\n'); // vider buffer
        }
       
    
        printf("Nombre 2 : ");
        
        while (scanf("%f",&nombreA) != 1){
            printf("Veuillez saisir un nombre valide : ");
            while(getchar()!='\n'); // vider buffer
        }
    
        menu() ;
    
    printf("%.3f", resultat);
    
    return 0;
}
