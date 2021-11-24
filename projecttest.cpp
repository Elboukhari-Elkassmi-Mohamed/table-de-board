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
//vous utiliser cette function for add  acc 

void ajoute() 
{ 
system ("cls");
int i;
int choix;

	printf("\n\n\nEnter the number of accounts you want to be created : ");
	scanf("%d",&choix);
		   
    	for (i=1;i<=choix;i++)
		{
          printf("\n nom : ");
          scanf("%s", C[compteur].nom);
          printf("\n prenom: ");
          scanf("%s", C[compteur].prenom); 
          printf("\n cin: ");
          scanf("%s", C[compteur].cin); 
          printf("\n montant: ");
          scanf("%f",&C[compteur].montant); 	  
        
	       compteur++;
		}
	    
	    	 system ("cls");
	    	 fflush(stdin);
	    	 
}
         
    
//withdrawa
void retrait (int i)
{ 
   float mount;
               system ("cls");
	printf ("much do you want to withdrawal :");
	scanf ("%.2f",&mount);
	
	C[i].montant -= mount;
	printf ("%.2f\n",C[i].montant);	
	
}
//Deposit 
void Depot(int i)
{ 
   float mount;
              system ("cls");
	printf ("\nHow much do you want to deposit :");
	scanf ("%f",&mount);
	
	C[i].montant += mount;
	printf ("%.2f\n",C[i].montant);	
    
}

//function de recherhce 
void recherhce ()
{
char rech[20];
int i,s;
int position;
                                system ("cls");
       printf("Enter CIN Client That You Are Looking For :");
       scanf("%s",rech);
    for (i=1;i<compteur;i++)
     
	  if (strcmp(rech,C[i].cin) == 0)
         {
        	printf("le compte est exist %s %s %s %.2f",C[i].nom,C[i].prenom,C[i].cin,C[i].montant);
             position=i;
                            	 system ("cls");
             printf("\nTo Withdraw From This Account Press:1\n");
           	 printf("\nTo Deposit From This Account Press :2\n");
           	scanf("%d",&s);
           	switch (s){
           		case 1:	retrait(position);system("pause");menu();
				     break;
           		case 2: Depot(position);system("pause");menu();
				     break;

				 default: menu();

			   }
        }
       else 
         printf("ce client n'est exist pas\n ");
         

}



void menu()
{
	  
				  system ("cls");

   int  choix;
   int position;



          printf("\n\n\t\t\t\t\t\t\tMenu\n\n");
          printf("\t\t\t\t\t Add an account.............................:1\n");
          printf("\t\t\t\t\t Deposit and withdrawa From an account......:2\n");
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
