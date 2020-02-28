#include <16f877.h>//Kütüphaneden denetleyici Özelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilatör hýzý 4MHz olarak ayarlýyoruz

Void Main() //Ana program baþlangýcý
{

set_tris_b(0x01); 
set_tris_c(0x00); 
output_b(0);                  //portbnin tüm çýkýþlarýný 0 yap
int x=0;
for(;;)

{
if(input(pin_b0)==1)
x++;
switch(x)
{
case 1:output_c(1); delay_ms(100); break;
case 2:output_c(2); delay_ms(100); break;
case 3:output_c(4); delay_ms(100); break;
case 4:output_c(8); delay_ms(100); break;
case 5:output_c(16); delay_ms(100); break;
case 6:output_c(32); delay_ms(100); break;
case 7:output_c(64); delay_ms(100); break;
case 8:output_c(128); delay_ms(100); break;
 }
}
}
