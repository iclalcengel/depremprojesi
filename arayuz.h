#pragma once
#include <stdio.h>

int arayuz_menu()      

{
    int secim=0;
    printf("***************************************************\n");
    printf("*****TURKIYE DEPREM RAPOR VE SORGULAMA SISTEMI*****\n"); 
    printf("***************************************************\n");

    printf("SORGULAMA ICIN = 1\n");
    printf("SIRALAMA ICIN = 2\n"); 
    printf("KAYDETME ICIN = 3\n");
    printf("AYRISTIRMA ICIN = 4\n");
    printf("ANALIZ ICIN = 5\n");
    printf("CIKIS ICIN = 6\n");
    printf("SECIMINIZI YAPINIZ-->");
    scanf("%d",&secim);

    return secim;
}