#include<stdio.h>
#include<stdlib.h>


void ajoute(int opperation);
void menu();  


  struct compte {
	char nom[30];
	char prenom [30];
	char cin [30];
	double montant;
};


//vous utiliser cette function for add 1 acc & multiple acc A


void ajoute(int opperation) 
{ 
 system ("cls");
       struct compte clients;
int i;
compte clients[];
int choixm;

       
	printf("\n\n \t\t \t\t \t\t Welcom ");
		   

		{
        printf("\n nom :\n ");
        scanf("%s",clients[i].nom);
        printf("\n prenom:\n ");
        scanf("%s",&clients[i].prenom); 
        printf("\n cin:\n ");
        scanf("%s",&clients[i].cin); 
        printf("\n montant:\n ");
        scanf("%f",&clients[i].montant); 	  
        
	    }
	    if(opperation == 2){
	    	 system ("cls");
	    	 fflush(stdin);

	     printf("\n\n\t\t\t\t\t Pour ajouter un compte suplementaire tapez 1 ");
         printf("\n\t\t\t\t\t Cliquez sur n'importe quelle touche pour revenir au menu principal \n ");
         scanf("%d",&choixm);
         
         if(choixm == 1){
         	ajoute(2);
		 }else{
		 	menu();
		 }
			}
      
	    
}




void menu()
{	   
				  system ("cls");

   int  choix;
   



          printf("\n\n\t\t\t\t\t\t\tMenu\n\n");
   	      printf("\t\t\t\t\t Ajouter un compte bancaire .......:1\n");
          printf("\t\t\t\t\t Ajouter multiple compte bancaire..:2\n");
          printf("\t\t\t\t\t Operations .......................:3\n");
          printf("\t\t\t\t\t Affichage.........................:4\n");
          printf("\t\t\t\t\t Fidelisation......................:5\n");
          printf("\t\t\t\t\t Quitter...........................:0\n");
          
          printf("\n\n\n\n\n\n\t\t\t\tS'ils Vous Plait selectioner Votre Choix:");
          scanf("%d", &choix);
           //// If this isnt here it THE MENU WILL LOOP FOR EVER AFFTER I RETURN TO IT
			rewind(stdin);
          	  

          switch(choix)
          {          	  

                  case 1: ajoute(1) ;
				  printf ("\t\t\t    you added your acountes seccesfully");
				                menu(); break ;
				 
                                                                                                                                                                                                	
                  case 2: ajoute(2) ; break ;
                  case 3:
                  	system ("cls");

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
	
        menu();       
       
}
