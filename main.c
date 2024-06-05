#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {\
	char titre [50];
	char auteur[50];
	int nbrpages;
	float prix;
}Livre;

int main (){
	Livre L[50];
	int choix,i,n;
	char a[50];
	do {

	printf ("***************************************************\n");
	printf("Appuyez sur 1 pour ajouter les details des  livres .\n");
    printf("Appuyez sur 2 pour afficher les details des livres .\n");
    printf("Appuyez sur 3 pour affiche le livre de l'auteur donne .\n");
	printf("Appuyez sur 4 pour compter le nombre des  livres .\n");
    printf("Appuyez sur 5 pour sortir .\n");
    printf ("***************************************************\n");
	printf ("saisissez votre choix :");
	scanf("%d",&choix);
	switch (choix){
		case 1 :
			printf("Combien de livres vous souhaitez ajouter :");
			scanf("%d",&n);
			for (i=0;i<n;i++){
		         printf ("***************************************************\n");
				 printf ("entrer les details du livre num %d :\n",i+1);
			     printf ("***************************************************\n");
			     printf ("Titre :");
			     scanf(" %[^\n]s",&L[i].titre);
			     printf ("Auteur :");
			     scanf(" %[^\n]s",&L[i].auteur);
			     printf ("\nnombre de pages :");
			     scanf("%d",&L[i].nbrpages);
			     printf ("\n Prix :");
			     scanf("%f",&L[i].prix);
			}
		        printf ("***************************************************\n");
		         break;
		case 2:
	             printf ("***************************************************\n");
				 printf ("Les details des livres :\n");
                 printf ("***************************************************\n");
                for (i=0;i<n;i++){
                 	 printf("Livre num %d :\n",i+1);
                 	 printf("Titre : %s - Auteur : %s -Nombre de pages : %d -prix : %.2fEuro\n",L[i].titre,L[i].auteur,L[i].nbrpages,L[i].prix);
                 	}
				 break;
       	case 3:
       		printf("saisissez le nom de l'auteur :\n");
       		scanf(" %[^\n]s",&a);
            printf ("***************************************************\n");
                for(i=0;i<n;i++){
       	           if(strcmp(L[i].auteur,a)==0)
       	    	     printf("%s \t %2.f\n",L[i].titre,L[i].prix);
       	            }
       	            break;
        case 4:
        	printf("Nombre total de livres dans la bibliotheque est :%d\n",n);
        	printf ("***************************************************\n");
        case 5:
        	exit (0);
	}
	}while(choix !=5);

	return 0;
}
