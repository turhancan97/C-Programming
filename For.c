#include <16f877.h>//K�t�phaneden denetleyici �zelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilat�r h�z� 4MHz olarak ayarl�yoruz

Void Main()
{

set_tris_b(0x00);// B portu ��k�� oldu


for( int i=0; i<4; ++i)
{
   output_b(1);
   delay_ms(50);
   output_b(0);
   delay_ms(50);
}
}
