#include <16f877.h>//K�t�phaneden denetleyici �zelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilat�r h�z� 4MHz olarak ayarl�yoruz

Void Main()
{

set_tris_b(0x00);
set_tris_c(0xFF);
output_b(0);

while(1)
{
   if (input(pin_c3)==1)
   output_b(1);
   else
   output_b(2);
}
}

