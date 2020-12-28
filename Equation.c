#include <stdio.h>
#include <stdlib.h>
#include <math.h>
///////////// Declaration of Procedures and Global Variables /////////
void Operation1(); 
void Operation2();
int choix;

int main(int argc, char *argv[]) {
	

////////////// Function of choice ///////////////
	int choice(){
	
	printf("\n Quelle Operation Mathematique Vous Voulez ? Entrez votre choix :");
	printf("\n\n 1. ax+b \n 2. ax+bx+c=0 \n 3. Quitter \n\n => : ");
	scanf("%d",&choix);
	return choix;
	}   
	
/////////////// Function of loop	////////////////////////
	int loop ()
{

while ( choix != 1 && choix != 2 && choix != 3 )
	{ 
	printf("\n Choix Introuvable , essayez-vous un autre :");
	scanf("%d",&choix);
	return choix;
	
	}
	
}
///////// Appel /////////////	
	     
choice(); // Choice function

 while ( loop() != 1 && loop() != 2 && loop() != 3)
 {
 	loop();
 }
 
if ( choix == 1 )
{Operation1();}

else if ( choix == 2 )
{Operation2();}
else printf("\n Au revoir !");exit(0);
                

	
	

    getch();
	return 0;
}



///////////////////// ax+b =0 Procedure //////////////////////////
void Operation1(){
	
  float a,b,x;

  printf(" \n ********** Exercice ax+b = 0 ********* \n ");
  printf(" \n");
  printf("  -Entrer a : \t");
  scanf("%f",&a);
  printf("  -Entrer b : \t");
  scanf("%f",&b);
  
  if ( a != 0 && b != 0)
   { 
	  x= -b/a;
       
        printf("\n -La solution est : %.2f  ",x);
       }
       else if ( a != 0 && b == 0)
        { 
             printf(" \n -La seul solution est : 0  \t");
             }
     else  if ( a == 0 && b == 0 )
              
              { printf(" \n -L'operation a plusieurs solutions . " ); }
              
     else  
               { printf(" \n -L'operation n'a pas aucune solution ! ");}}
               
               
///////////////////// ax+bx+c =0 Procedure //////////////////////////               
               
void Operation2(){
	
	printf("\n *********** Exercice ax + bx2 + c = 0 ***********\n");
	float a,b,c;
	float x,d;
	float x1,x2;

	
	
	printf("\n  -Entrer a : ");
	scanf("%f",&a);
	
	printf("\n  -Entrer b : ");
	scanf("%f",&b);
	
	printf("\n  -Entrer c : ");
	scanf("%f",&c);
	
    d  = (b*b)-4*a*c;
    
    printf("\n  -Delta est : %.2f",d);
		
	

    if (d > 0)
    {
    	x1 = (-b+sqrt(d))/(2*a); 
    	x2 = (-b-sqrt(d))/(2*a);
    	
    	printf(" \n \n L'operation a deux solutions : \n x1 = %.2f  \n x2 = %.2f",x1 ,x2);
    	
    	
	}
	
	else if ( d == 0 )
	{
		x = (-b)/2*a	;		
	
		printf("L'operaiton a une seule solution : %.2f",x);
	}
	
	else 
	{
		printf("L'operation n'a pas aucune solution !");
	}
} 



    
