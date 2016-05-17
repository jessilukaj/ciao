/*Dato n casuale (1-10), generare n numeri tra -100 e 100 stampandoli
e comunicare il n di positivi e il n dei negativi*/
 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	   int numero,segno,volte,cont,positivi=0,negativi=0,nullo=0;
	   srand(time(NULL));
	   volte=rand()%10+1;
	   printf("%d volte\n\n",volte);
	   cont=0;
	   while(cont<volte){
						 numero=rand()%101;
	      				 segno=rand()%2;
	                     switch(segno){
	      			    			   case 0: printf("%d\n\n",numero); 
	      			    			           if(numero==0){
												 			nullo++;
										       }
										       else{
										       		positivi++;
										       }
											   break;
	       			    			   case 1: if(numero==0){
												 			nullo++;
										       }
										       else{
										       		numero=0-numero;
											   		negativi++;
											   }
											   printf("%d\n\n",numero); 
											   break;
		                 }
						 cont++;	   			         
	   }
	   printf("Ci sono %d numeri positivi, %d numeri negativi e %d numeri nulli\n\n",positivi,negativi,nullo);
	   
	   system("pause");
}
