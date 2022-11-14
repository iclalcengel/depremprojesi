#include<stdio.h>
#include<string.h>
#include<math.h>

void siralama(){
	
    int sayi = 0;
    int secim = 0;
    int i,j,k;
	do{
       printf("Kullanici kac tane parametre girecek: ");
       scanf("%d",&sayi);
	}while(sayi < 0 || sayi > 3);
	int array[sayi];
	char **kosul; 
	kosul = (char **)malloc(sayi * 8);
	for(i = 0 ; i  < sayi ;i++){
		*(kosul + i) = (char *)malloc(20);
	}
	printf("\n");
    for (j = 0 ;  j < sayi;j++){
			do{
	   printf("Hangi parametreye gore siralamak istersiniz\n1-Ilce\n2-Zaman\n3-Buyukluk: ");
	   scanf("%d",&secim);	   
	}while(secim < 1 || secim > 3);
    array[j] = secim;
	}
	printf("\n");
	fflush(stdin);
	
 	for (k = 0; k < sayi ;k++){
 		if(*(array + k) == 1){
		printf("Ilcenizin ismini giriniz: ");
	    gets( *(kosul + k) );
	    printf("\n");
	}else if( *(array + k) == 2){
		printf("Zamani giriniz: ");
	    gets( *(kosul + k) );
	    printf("\n");
	}else{
		printf("Buyuklugu giriniz: ");
		gets(  *(kosul + k) );
	    printf("\n");
	}
	
    	
	}
 	
	 	
 		
	}	
 			
