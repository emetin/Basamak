#include <stdio.h> //Kütüphaneler tanimlandi
#include <conio.h>
void main()
{
 int sayi, birler, onlar, yuzler, binler; //Değişkenler int ile tanimlandi.

 printf("Sayiyi giriniz= "); //Kulanıcıdan program için sayi istenir.
 scanf_s("%d", &sayi);
 printf("Girilen sayi %d.\n", sayi);
       if (sayi >= 1000 && sayi <= 9999)//Sayının if koşulu kontrol edilir.
       {
        birler = sayi % 10;
        printf("%dAdet birlik sayi,\n", birler);

	onlar = ((sayi % 100) - (sayi % 10)) / 10;
        printf("%dAdet onluk sayi,\n", onlar);

	yuzler = ((sayi % 1000) - (sayi % 100)) / 100;
        printf("%dAdet yuzluk sayi,\n", yuzler);

	binler = (sayi - (sayi % 1000)) / 1000;
        printf("%dAdet binlik sayi vardir.\n", binler);
        } // if koşulu sonu.
        else//if koşulu sağlanmadığında else sağlanır.
        {
        printf("\n Lutfen 4 basamakli bir sayi giriniz.İslemimiz gecersiz.\n");
        } //else koşulu sonu.
		getch();//programın kapanmamasını sağlar.
} // mainsonu.
