#include <stdio.h> //gerekli kutuphaneler tanimlandi
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>




void menu() //Önce menu fonksiyonu oluşturuldu
{
        printf("\n Lutfen Seciminizi Yapiniz...");
        printf("\n 1-Bakiye Sorgula");
        printf("\n 2-Para Ekle");
        printf("\n 3-Para Cek");
        printf("\n 4-Para Gonder");
        printf("\n Cikis Icin 0'a Basin");
        printf("\n\n Seciminiz :");

}
void main()
{
        // Degerler burada tanimlandi.
        int girilenhesap = 0;
        int kullanicihesapno = 100;
        int sifre = 111;
        int girilenSifre;
        int paraMiktari = 1000;
        int girilenPara = 0;
        int cekilenPara = 0;
        int gonderilenmiktar = 0;
        int gonderileninhesapNo = 111;
        
        printf("\n");// Bir alt satıra geçiş yapar 
		printf("AvP BANKASINA HOSGELDINIZ\n");

        printf("Kullanici Hesap Numaranizi Giriniz : \n");//Hesap no sorar
        scanf_s("%d", &girilenhesap);

        printf("Sifrenizi Giriniz : \n");//Sifreyi ister
        scanf_s("%d", &girilenSifre);
        if (girilenhesap == kullanicihesapno && girilenSifre == sifre) 
                //Hesap no ve şifrenin uyumlu olması gerekir uyum sağlanmadıkça program acilmaz.
        {
                printf("\nBilgileriniz Dogrulandi !\n");
                printf("\n");
                printf("------\n");

                menu();//Menu sekmesi cagirilir
                
                        int secim; //Kullanicidan secim yapmasini istiyoruz.
                        scanf_s("%d", &secim);
        
                while (secim != 1000) // 1000e basmadikca program kapanmayacak.
                {
                        switch (secim)
                        {                        
                        case 0:
                                exit(1);                                                
                        case 1:
                                printf("\nBakiye : %d Turk Lirasi", paraMiktari);
                                printf("\n");
                                break;
                        case 2:
                                printf("\nEklemek Istediginiz Miktari Giriniz : \n");
                                scanf_s("%d", &girilenPara);
                                paraMiktari = paraMiktari + girilenPara;
                                printf("Toplam Paraniz: %d Turk Lirasi\n", paraMiktari);
                                break;
                        case 3:
                                printf("\nCekmek Istediginiz Miktari Giriniz : \n");
                                scanf_s("%d", &cekilenPara);
                                
                                if (cekilenPara <= paraMiktari && 0 < cekilenPara)
                                        //Cekilen para hesaptaki paradan fazla olamaz.

                                {
                                        paraMiktari = paraMiktari - cekilenPara;
                                        printf("Kalan Paraniz: %d Turk Lirasi\n", paraMiktari);
                                }
                                else
                                {
                                        printf("Hesabinizda bulunandan fazlasini giremezsiniz !");
                                }
                                break;
                        case 4:
                                
                                printf("\nLutfen Para Gondermek Istediginiz Hesap No'yu Giriniz : \n");//Kullanicidan hesap no istedik.
                                scanf_s("%d", &gonderileninhesapNo);
                                printf(" %d numarali hesap nosuna para gondereceksiniz...\n", gonderileninhesapNo);
                                printf("\nLutfen Gondermek Istediginiz Tutari Giriniz : \n");
                                scanf_s("%d", &gonderilenmiktar);
                                
                                if (gonderilenmiktar <= paraMiktari && 0 < gonderilenmiktar)
                                        //Gonderilen para hesaptaki paradan fazla olamaz.
                                
                                {
                                        paraMiktari = paraMiktari - gonderilenmiktar;
                                        printf("Tebrikler paraniz gonderilmistir.");
                                        printf("Kalan Paraniz: %d Turk Lirasi \n", paraMiktari);
                                }//if Gonderilen paranin işlem sonu                        
                                else
                                
                                {
                                        printf("Hesabinizda bulunandan daha fazla tutar gonderemezsiniz !");
                                }//else sonu
                                break;
                        }//switch sonu                 
                        
                        menu(); // Kullanici islemini yaptiktan sonra menu acilir ve secim yapmasi istenir
                        scanf_s("%d", &secim);
                }// while sonu
        } //if'in sonu

        else // Kullanici hesap no veya sifreyi yanlis girerse program kapanır
        {
                printf("Sifre veya Hesap No Hatali Program Kapanacak !\a");
        }
getch(); // Programin görülmesi için kapanmasini önler.
}// main sonu 
