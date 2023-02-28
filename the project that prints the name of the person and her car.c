#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct kisi
{
    char ad[20];
    char soyad[20];
    int yas;
    char tel[20];
    char adres[20];
    char eposta[20];
    
};

struct araba
{   
    int marka;
    char model[20];
    float fiyat;

};

int main (void)
{

struct kisi kisi1;
struct araba araba1;

system("cls");
system("color 0a");

printf("Adinizi giriniz: ");
scanf("%s",&kisi1.ad);
fflush(stdin);

printf("Soyadinizi giriniz: ");
scanf("%s",&kisi1.soyad);
fflush(stdin);

printf("Yasinizi giriniz: ");
scanf("%d",&kisi1.yas);
fflush(stdin);

printf("Telefon numaranizi giriniz: ");
scanf("%s",&kisi1.tel);
fflush(stdin);

printf("Adresinizi giriniz: ");
scanf("%s",&kisi1.adres);
fflush(stdin);

printf("E-posta adresinizi giriniz: ");
scanf("%s",&kisi1.eposta);
fflush(stdin);

printf("Arabanizin markasini giriniz:");
scanf("%d",&araba1.marka);
fflush(stdin);

printf("Arabanizin modelini giriniz: ");
scanf("%s",&araba1.model);
fflush(stdin);

printf("Arabanizin fiyatini giriniz: ");
scanf("%f",&araba1.fiyat);
fflush(stdin);

printf("\n %s %s %d yasinda %s numarali telefonuyla %s adresinde %s e-posta adresiyle %s model araba almistir. \n",kisi1.ad,kisi1.soyad,kisi1.yas,kisi1.tel,kisi1.adres,kisi1.eposta,araba1.model);

    return 0;
}