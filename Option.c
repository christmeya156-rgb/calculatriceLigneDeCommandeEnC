#include <stdio.h>
#include "Main.h"

void menu(){
    int choix ;
/* Choix de l'opération par l'utilisateur */    
    printf("\n\t Choisir une option\n\n"
    "1. Addition\n"
    "2. Soustraction\n"
    "3. Division\n"
    "4. Multiplication\n"
    "5. Puissance\n"
    "6. racine\n"
    "7. Factorielle\n"
    "8. Modulo\n");
    printf("\n Option : ");
    do{
        printf("Choisissez l'une des options ci-dessus 👆");
        scanf(" %d",&choix) ;
      }while(choix != 1|| choix != 2 || choix != 3 ||choix != 4 || choix != 5 || choix != 6 || choix != 7 ||choix != 8) ;
    
    switch(choix)
    {
        case 1:
            resultat=addition(nombreA, nombreB) ;
        break ;
        
        case 2:
            resultat=soustraction(nombreA, nombreB) ;
        break ;
        
        case 3:
            resultat=division(nombreA, nombreB) ;
        break ;
        
        case 4:
            resultat=multiplication(nombreA, nombreB) ;
        break ;
        
        case 5:
            resultat=puissance(nombreA, nombreB) ;
        break ;
        
        case 6:
            resultat=racine(nombreA, nombreB) ;
        break ;
        
        case 7:
             resultat=factorielle(nombreA) ;
        break ;
        
        case 8:
            resultat=modulo(nombreA, nombreB) ;
        break ;
        
        default:
            
    }
}

float addition(float nombreA, float nombreB){
    return (nombreA+nombreB) ;
}

float soustraction(float nombreA, float nombreB){
    return (nombreA-nombreB) ;
}

float multiplication(float nombreA, float nombreB){
    return (nombreA*nombreB) ;
}

float division(float nombreA, float nombreB){

    do{
        printf("le diviseur ne peut pas être nul. Entrer un nombre") ;
        scanf("%f", & nombreB);
    }while(nombreB==0) ;

    return (nombreA/nombreB) ;
}

/* Pour la puissance nombreA représente la base et nombreB, l'exposant. J'améliorerai cette fonction */

float puissance(float nombreA, float nombreB){
    return (float)pow((double)nombreA,(double)nombreB);
}


/* Pour la racine nombreA représente le nombre et nombreB, l'indice. J'améliorerai cette fonction aussi */

float racine(float nombreA, float nombreB){
     return (float)pow((double)nombreA,1.0/(double)nombreB);
}

/* On affichera que la factorielle du premier nombre */

float factorielle(float nombreA){
  int nombre=(int)nombreA ;
  int res=1 ;

    if( nombre==1){
        res=1;
    }
    
    else if(nombre==0){
        printf("la factorielle de 0 n'existe pas !");
    }

    else{
        for(int i=1; i<=nombre; i++){
        res*=i;
    }
    
    return res ;
}

float modulo(float nombreA, float nombreB){
    do{

        printf("le diviseur ne peut pas être nul. Entrer un nombre : ") ;
        scanf("%f", &nombreB);

      }while(nombreB==0) ;

        return ((int)nombreA%(int)nombreB) ;
}
    
