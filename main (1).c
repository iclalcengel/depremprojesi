#include <stdio.h> //standart kutuphaneler 
#include <stdlib.h> //standart kutuphaneler 
#include <string.h> //standart kutuphaneler 
#include "arayuz.h" //arayuz ve menu icin olusturulmus kutuphane
#include "sorgula.h" //sorgulama yapmak icin olusturulmus kutuphane
#include "illeregoreayristirma.h" //illere gore ayristirma yapilmak icin olusturulmus kutuphane
#include "analiz.h" //analiz icin olusturulmus kutuphane

int main () {
    
    FILE *dosya;
    dosya=fopen("/Users/iclalcengel/Desktop/earthquakes.csv","r");  //dosya acma
    
    if(dosya==NULL) {       //dosyanin acilip acilmadiginin kontrolu
        printf("Dosya bulunamadi.");   //dosya acilamadigi icin hata mesajı
    }

dongu:  //menunun cikis secilmedigi surece tekrar edilmesini saglar.

int secim;      //menu icin switch degiskeni 
arayuz_menu();   //menu cagirma fonksiyonu
  
switch(secim) {  //menu secim sonucu icin olusturulan switch yapisi
    
    case 1:
    
    secim1_sorgula();  //sorgulama ekranini cagirma fonksiyonu
    goto dongu;    //kullanici cikisi secmedigi surece tekrar menu ekrani getirilir.
    
    case 2:
    
    siralama(); //siralama icin yazilan fonksiyon
    goto dongu;   //kullanici cikisi secmedigi surece tekrar menu ekrani getirilir.
    
    case 3:
    
    // kaydetme(); kaydetme fonsiyonu Ensar Yaman tarafindan yazilacaktir.
    goto dongu;  //kullanici cikisi secmedigi surece tekrar menu ekrani getirilir.
    
    case 4:
    
    karsilastir(); //illere gore ayristirmak icin yazilan fonksiyon
    goto dongu;   //kullanici cikisi secmedigi surece tekrar menu ekrani getirilir.
    
    case 5:
    
    analiz();    //analiz icin yazılan fonsiyon
    goto dongu;  //kullanici cikisi secmedigi surece tekrar menu ekrani getirilir.
    
    case 6:
    
    printf("Cikis isleminiz gerceklestirilmistir.");  //kullaniciya cikis islemi mesaji
    
}
    

   fclose(dosya);
   
    return 0;
}
