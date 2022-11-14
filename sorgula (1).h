#pragma once
#include <stdio.h>
#include <stdlib.h> //kutuphaneler

int secim1_sorgula() {
	
	FILE* dosya;    //veri cekilecek dosya
	FILE* yedek;    //gecici veri tutan dosya

	dosya=fopen("/Users/iclalcengel/Desktop/earthquakes.csv","r");  //dosya acma
	yedek = fopen("/Users/iclalcengel/Desktop/ yedek.csv","w+");    //dosya acma

	char kelime, kelime2[25], kelime3[480];  //verileri ayırmak icin tutulan degisken dizileri
	int satir_sonu = 0;    //satırları ayıran 
	int sayac;  //verileri saymak icin degisken

	printf("Sehir-bolge sorgulaması tarih-saat sorgulaması ya da richter buyuklugu sorgulamasi icin istenilen deger girisini yapiniz:");
	//kullanicinin giris yapmasi icin 
	scanf("%s", kelime2); //okuma
	while (dosya!=NULL) { //dosya acılıp acılmadıgı kontrolu ile baslayan dongu
		
		fscanf(dosya, "%c", &kelime);     //dosyadan okuma
		kelime3[satir_sonu] = kelime;
		if (kelime3[satir_sonu] == '\n') { //kelime sonuysa
			if (strcmp(kelime3, kelime2) == 0) { //iki kelime aynı boyutsa
				
				sayac++;  //veri sayimi artirilir
				
				int birim = 0;   //kelime elemanları icin tutulan degisken 
				
				for (birim = 0; kelime3[birim] != '\n'; birim++) {.  //bosluk degilse elemanı artirma
					
					printf("%c", kelime3[birim]);       //yazdır
					fprintf(yedek, "%c", kelime3[birim]);  //dosyaya yazdırma

				}
				printf("\n");   //satır atla
				fprintf(yedek, "\n"); //dosyada satır atlama

			}
			satir_sonu = -1;   //iki kelime aynı boyutsa -1
		}
		satir_sonu++;  //degilse artirma
	}
	fclose(dosya);  //dosyayi kapatma
	
	return sayac;  //veri sayimina ekleme dönüşü
}


