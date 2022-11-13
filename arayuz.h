#pragma once
#include <stdio.h>

int arayuz_menu()   //arayuz ve menu fonksiyonu

{
    int secim=0; //secim yapilirken integer deger tutmasi icin olusturulmus degisken
    
    printf("***************************************************\n");
    printf("*****TURKIYE DEPREM RAPOR VE SORGULAMA SISTEMI*****\n");    //sisteme hosgeldiniz mesaji
    printf("***************************************************\n");

    printf("SORGULAMA ICIN = 1\n");    //menu islevleri
    printf("SIRALAMA ICIN = 2\n");     //menu islevleri
    printf("KAYDETME ICIN = 3\n");     //menu islevleri
    printf("AYRISTIRMA ICIN = 4\n");   //menu islevleri
    printf("ANALIZ ICIN = 5\n");       //menu islevleri
    printf("CIKIS ICIN = 6\n");        //menu islevleri
    printf("SECIMINIZI YAPINIZ-->");   //menu islevleri
    scanf("%d",&secim);                //secimimizi girdigimiz integer degeri okuma 

    return secim;                      //fonksiyonun secilen menu islev degerini dondurmesi
}
