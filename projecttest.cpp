#include<stdio.h>
#include<stdlib.h>
#include <string.h>



   struct compte {
	char nom[100];
	char prenom [100];
	char cin [100];
	float montant;
};

struct compte C[100];

 
 
void ajoute();
 void menu();


//vous utiliser cette function for add multiple acc A

int compteur=0;

void ajoute() 
{ 
 system ("cls");
int i;
int choix;

	printf("\n\n \t\t \t\t \t\t enter les nombre des creation des compte: ");
	scanf("%d",&choix);
		   
		for (i=0;i<choix;i++){
		
       printf("\n nom :\n ");
       scanf("%s", C[i].nom);
        printf("\n prenom:\n ");
       scanf("%s", C[i].prenom); 
        printf("\n cin:\n ");
        scanf("%s", C[i].cin); 
        printf("\n montant:\n ");
      scanf("%f",&C[i].montant); 	  
        
	    compteur++;
		}
	    
	    	 system ("cls");
	    	 fflush(stdin);
	    	 
			 }
         
    


//function de recherhce 
void recherhce (){
char rech[20];
int i;
int position=0;

       printf("entrer cin de client que vous recherche \n");
       scanf("%s",rech);
	   for (i=0;i<compteur;i++)
           if (strcmp(rech,C[i].cin) == 0)
             {
             	printf("%s %s %s %.2f",C[i].nom,C[i].prenom,C[i].cin,C[i].montant);
                            position=i;

              }
       else 
         printf("ce client n'est exist pas\n ");
}



void menu()
{
printf("hello");
	  
				  system ("cls");

   int  choix;
   



          printf("\n\n\t\t\t\t\t\t\tMenu\n\n");
          printf("\t\t\t\t\t Ajouter multiple compte bancaire..:1\n");
          printf("\t\t\t\t\t Operations .......................:2\n");
          printf("\t\t\t\t\t Affichage.........................:4\n");
          printf("\t\t\t\t\t Fidelisation......................:5\n");
          printf("\t\t\t\t\t Quitter...........................:0\n");
          
          printf("\n\n\n\n\n\n\t\t\t\tS'ils Vous Plait selectioner Votre Choix:");
          scanf("%d", &choix);
           //// If this isnt here it THE MENU WILL LOOP FOR EVER AFFTER I RETURN TO IT
			rewind(stdin);
          	  

          switch(choix)
          {          	  

                  case 1: ajoute() ;
				  menu();	
				  	
								 break ;
                                                                                                                                                                                                	
                  case 2: recherhce ();
                  
				  
				   break ;
				   
                  case 3: 

                  	printf("\t\t\t\t\t Pour Operations De Retrait........:1\n");
                	printf("\t\t\t\t\t Pour Operations De Depot..........:2\n");
                  		
				  break ;
                  case 4: break ;
                  case 5:break ;
                  case 6: break ;
                  
                  default : menu() ;
                  break ;
                 
          }
      
          
		     
  }




int main(){
	void ajoute();
	void recherhce ();

  menu();       
}
