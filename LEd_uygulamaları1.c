#include <16f877.h>//Kütüphaneden denetleyici Özelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilatör hýzý 4MHz olarak ayarlýyoruz

Void Main() //Ana program baþlangýcý
{

set_tris_b(0x00);// B portu çýkýþ oldu

while(1) //sonsuz döngüye sokar
{
output_b(0x01); // 0000 0001 (portb'nin 0. bitini 1 yaptýk)
delay_ms(500);
output_b(0x00); // 0000 0000 (portb'nin 0. bitini 0 yaptýk)
delay_ms(500);

}
}
