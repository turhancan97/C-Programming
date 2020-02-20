#include <16f877.h>//Kütüphaneden denetleyici Özelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilatör hýzý 4MHz olarak ayarlýyoruz

Void Main()
{

set_tris_b(0x00);// B portu çýkýþ oldu
set_tris_c(0xFF);// C Portu giriþ oldu
output_b(0); // b portu çýkýþýný 0 yaptýk
int x=0;

while(1)
{
   if (input(pin_c3)==1)
   {
   x++;
   
   switch (x)
   {
   case 1: output_b(1); delay_ms(100); break;
   case 2: output_b(2); delay_ms(100); break;
   case 3: output_b(4); delay_ms(100); break;
   }
  
}
}
}

