#include <16f877.h>//Kütüphaneden denetleyici Özelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilatör hýzý 4MHz olarak ayarlýyoruz

Void Main()
{

set_tris_b(0x00);// B portu çýkýþ oldu


for( int i=0; i<4; ++i)
{
   output_b(1);
   delay_ms(50);
   output_b(0);
   delay_ms(50);
}
}
