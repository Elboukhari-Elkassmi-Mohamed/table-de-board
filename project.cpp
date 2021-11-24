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
int compteur=0;
//vous utiliser cette function for add  acc 

void ajoute() 
{ 
system ("cls");
int i;
int choix;

	printf("\n\n\nEnter the number of accounts you want to be created : ");
	scanf("%d",&choix);
		   
    	for (i=0;i<choix;i++)
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
	scanf ("%f",&mount);
	
	C[i].montant -= mount;
	printf ("%f\n",C[i].montant);	
	
}
//Deposit 
void Depot(int i)
{ 
   float mount;
              system ("cls");
	printf ("\nHow much do you want to deposit :");
	scanf ("%f",&mount);
	
	C[i].montant += mount;
	printf ("%f\n",C[i].montant);	
    
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
    for (i=0;i<compteur;i++)
     
	  if (strcmp(rech,C[i].cin) == 0)
         {
        	printf("le compte est exist %s %s %s %f",C[i].nom,C[i].prenom,C[i].cin,C[i].montant);
             position=i;
//                            	 system ("cls");
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
         printf("ce client n'est exist pas\n ");system("pause");menu();
         

}
//////tri 

void triAscendant(){
	struct compte tmp ;
	int i;
	int k;
	 for (i=0;i<compteur;i++){
	   for (k=0;k < compteur -i -1 ; k++){
	    if(C[k].montant > C[k+1].montant){
	       tmp = C[k];
	       C[k]=C[k+1];
	       C[k+1]=tmp ;
    	}	
	}	
}

for (i=0;i<compteur;i++)
          {
	printf("\n %s %s %s %f \n",C[i].nom,C[i].prenom,C[i].cin,C[i].montant);
          }
}
/////tri par nom
//void trinom(){
//	struct compte tmp ;
//	int i;
//	int k;
//	 for (i=0;i<compteur;i++){
//	   for (k=0;k<compteur-i-1;k++){
//	    if(C[k].prenomC[k+1].prenom){
//	       tmp = C[k];
//	       C[k]=C[k+1];
//	       C[k+1]=tmp ;
//		}
//	
//	
//}

//}
//for (i=0;i<compteur;i++)
//          {
//	printf("\n %s %s %s %f \n",C[i].nom,C[i].prenom,C[i].cin,C[i].montant);
//          }
//	
//	
//}
//////tri 
void triDescendant (){
	struct compte tmp ;
	int i;
	int k;
	 for (i=0;i<compteur;i++){
	   for (k=0;k<compteur-i-1;k++){
	    if(C[k].montant < C[k+1].montant){
	       tmp = C[k];
	       C[k]=C[k+1];
	       C[k+1]=tmp ;
		}
	
	
}

}
for (i=0;i<compteur;i++)
          {
	printf("\n %s %s %s %f \n",C[i].nom,C[i].prenom,C[i].cin,C[i].montant);
          }
}




void menu()
{
	  
				  system ("cls");

   int  choix;
   int position;
   int s;



          printf("\n\n\t\t\t\t\t\t\tMenu\n\n");
          printf("\t\t\t\t\t Add an account.............................:1\n");
          printf("\t\t\t\t\t Deposit and withdrawa From an account......:2\n");
          printf("\t\t\t\t\t Affichage...................................3\n");
          printf("\t\t\t\t\t Fidelisation...............................:4\n");
          printf("\t\t\t\t\t Quitter....................................:0\n");
          
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
				   
                  case 3:                 system ("cls");
				          printf("\nTo Descendant all Accounts Press:1\n");
           	              printf("\nTo Ascendant  all Account Press:2\n");
           	                scanf("%d",&s);
           	                switch(s){
           	                	
           	                	case 1:triAscendant ();system("pause");menu(); break;
           	                    case 2:triDescendant();system("pause");menu();break;
////           	                    case 3:trinom();system("pause");menu();break;
           	                    case 4:
           	                	default: menu();
							   }
           	                
				   break ;
                  case 5:break ;
                  case 6: break ;
                  
                  default : menu() ;
                 
          }
      
          
		     
  }




int main(){
	void ajoute();
	void recherhce ();

  menu();       
}
