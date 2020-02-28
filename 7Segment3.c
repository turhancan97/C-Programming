//0-9 sayýcý
#include <16f877.h>//Kütüphaneden denetleyici Özelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilatör hýzý 4MHz olarak ayarlýyoruz

Void Main() //Ana program baþlangýcý
{
set_tris_b(0x00); 
set_tris_c(0x00); 
char dizi[]={63,6,91,79,102,109,125,7,127,111};
output_b(0);
output_c(0);
while(1)
{
for(int i=0; i<10;++i)
{
for(int k=0;k<10;++k)
{
output_c(dizi[i]);
output_b(dizi[k]);
delay_ms(100);
}
}
}
}
