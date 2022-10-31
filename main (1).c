#include <stdio.h> //standart kutuphaneler 
#include <stdlib.h> //standart kutuphaneler 
#include <string.h> //standart kutuphaneler 
#include "arayuz.h" //arayuz ve menu icin olusturulmus kutuphane

int main () {
    
    FILE *dosya;
    dosya=fopen("/Users/iclalcengel/Desktop/earthquakes.csv","r");
    
    if(dosya==NULL) {
        printf("Dosya bulunamadi.");
    }

int secim;      //menu icin switch degiskeni 
arayuz_menu();   //menu cagirma fonksiyonu
  
switch(secim) {
    
    case 1:
    
    case 2:
    
    case 3:
    
    case 4:
    
    case 5:
    
    case 6:
    
}
    
  
   fclose(dosya);
   
    return 0;
}

