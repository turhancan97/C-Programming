#include <16f877.h>//K�t�phaneden denetleyici �zelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilat�r h�z� 4MHz olarak ayarl�yoruz

Void Main()
{

set_tris_b(0x00);// B portu ��k�� oldu
set_tris_c(0xff);// C Portu giri� oldu
int i=0;
output_b(0); // b portu ��k���n� 0 yapt�k
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

