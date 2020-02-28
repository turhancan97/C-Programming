#include <16f877.h>//K�t�phaneden denetleyici �zelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilat�r h�z� 4MHz olarak ayarl�yoruz

Void Main() //Ana program ba�lang�c�
{

set_tris_b(0x03);// B portu ilk iki bit giri� oldu
#define BUTON1 pin_b0
#define BUTON2 pin_b1
#define LED    pin_b7
output_b(0);
while(1) //sonsuz d�ng�ye sokar
{
if(input(BUTON1)==1)
output_high(LED); 

if(input(BUTON2)==1)
output_low(LED); 
}
}
