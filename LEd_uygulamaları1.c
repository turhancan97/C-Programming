#include <16f877.h>//K�t�phaneden denetleyici �zelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilat�r h�z� 4MHz olarak ayarl�yoruz

Void Main() //Ana program ba�lang�c�
{

set_tris_b(0x00);// B portu ��k�� oldu

while(1) //sonsuz d�ng�ye sokar
{
output_b(0x01); // 0000 0001 (portb'nin 0. bitini 1 yapt�k)
delay_ms(500);
output_b(0x00); // 0000 0000 (portb'nin 0. bitini 0 yapt�k)
delay_ms(500);

}
}
