//Perline Marta

#include<stdio.h>
#include<stdlib.h>

main(){
       int numPerline,contPerline,sommaP=0,sommaD=0,valore=0;
       do{
          printf("Inserisci il numero di perline: ");
          scanf("%d",&numPerline);
       }while(numPerline<1);
       
       for(contPerline=0;contPerline<numPerline;contPerline++){
                                    valore=rand()%100+1;
                                    printf("V: %d\n",valore);
                                    if(valore%2==0){
                                                    sommaP+=valore;
                                    }
                                    else{
                                         sommaD+=valore;
                                    }
       }
       printf("P: %d D: %d\n",sommaP,sommaD);
       if(sommaP>sommaD){
                         printf("Pari\n\n");
       }
       else{
            if(sommaP<sommaD){
                              printf("Dispari\n\n");
            }
            else{
                 printf("Uguali\n\n");
            }
       }
       
       system("pause");
}
