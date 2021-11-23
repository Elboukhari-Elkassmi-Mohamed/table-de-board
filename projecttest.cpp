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

//declaration de fonction 
void ajoute();
void menu();
//declaration de fonction 



// compteur pour utiliser a la recherhce 
int compteur=1;
//vous utiliser cette function for add multiple acc A

void ajoute() 
{ 
system ("cls");
int i;
int choix;

	printf("\n\n \t\t Enter les nombre des compte qui tu vous cree:\n ");
	scanf("%d",&choix);
		   
    	for (i=1;i<=choix;i++)
		{
          printf("\n nom :\n ");
          scanf("%s", C[compteur].nom);
          printf("\n prenom:\n ");
          scanf("%s", C[compteur].prenom); 
          printf("\n cin:\n ");
          scanf("%s", C[compteur].cin); 
          printf("\n montant:\n ");
          scanf("%f",&C[compteur].montant); 	  
        
	       compteur++;
		}
	    
	    	 system ("cls");
	    	 fflush(stdin);
	    	 
}
         
    
//retrait 
void retrait (int i)
{ 
   float mount;
 
	printf ("donner votre la mounte :");
	scanf ("%f",&mount);
	
	C[i].montant -= mount;
	printf ("%f",C[i].montant);	
	
}
//Depot 
void Depot(int i)
{ 
   float mount;
 
	printf ("donner votre la mounte :");
	scanf ("%f",&mount);
	
	C[i].montant += mount;
	printf ("%f",C[i].montant);	
}

//function de recherhce 
void recherhce ()
{
char rech[20];
int i,s;
int position;

       printf("Entrer cin de client que vous recherche \n");
       scanf("%s",rech);
    for (i=1;i<compteur;i++)
     
	  if (strcmp(rech,C[i].cin) == 0)
         {
        	printf("le compte est exist %s %s %s %.2f",C[i].nom,C[i].prenom,C[i].cin,C[i].montant);
             position=i;
        }
         //else 
         //printf("ce client n'est exist pas\n ");
         
         	printf("\t\t\t\t\t Pour Operations De Retrait........:1\n");
           	printf("\t\t\t\t\t Pour Operations De Depot..........:2\n");
           	scanf("%d",&s);
           	switch (s){
           		case 1:
           			retrait(position);
				     break;
           		case 2: Depot(position);
				   break;

				 default: menu();

			   }
}



void menu()
{
printf("hello");
	  
				  system ("cls");

   int  choix;
   int position;



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
				   
                  
                  case 3: break ;
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
