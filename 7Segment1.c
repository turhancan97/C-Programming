#include <16f877.h>//Kütüphaneden denetleyici Özelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilatör hýzý 4MHz olarak ayarlýyoruz

Void Main() //Ana program baþlangýcý
{

set_tris_b(0x00); 

while(1)
{
output_b(7);
}
}
