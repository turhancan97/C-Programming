//0-9 say�c�
#include <16f877.h>//K�t�phaneden denetleyici �zelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilat�r h�z� 4MHz olarak ayarl�yoruz

Void Main() //Ana program ba�lang�c�
{

set_tris_c(0x00); 
char dizi[]={63,6,91,79,102,109,125,7,127,111};
output_c(0);
while(1)
{
for(int i=0; i<10;++i)
{
output_c(dizi[i]);
delay_ms(100);
}
}
}
