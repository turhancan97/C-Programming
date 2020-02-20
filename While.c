#include <16f877.h>//Kütüphaneden denetleyici Özelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilatör hýzý 4MHz olarak ayarlýyoruz

Void Main()
{

set_tris_b(0x00);// B portu çýkýþ oldu
set_tris_c(0xff);// C Portu giriþ oldu
int i=0;
output_b(0); // b portu çýkýþýný 0 yaptýk
delay_ms(100);

while(1)
{
   if (input(pin_c0)==1)
   
   i++;
   delay_ms(100);
   
   while (i>5)
   {
   output_b(0xff);
   delay_ms(500);
   output_b(0x00);
   delay_ms(500);
}
}
}

