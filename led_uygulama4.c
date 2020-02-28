#include <16f877.h>//Kütüphaneden denetleyici Özelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilatör hýzý 4MHz olarak ayarlýyoruz

Void Main() //Ana program baþlangýcý
{

set_tris_b(0x00); // B portu çýkýþ
set_tris_d(0x03); // D portu ilk iki bit giriþ oldu, diðer bitler çýkýþ oldu 0000 0011
output_b(0);                  //portbnin tüm çýkýþlarýný 0 yap
while(1) //sonsuz döngüye sokar
{
int x=1;
if(input(pin_d0)==1)
{
for(int i=0; i<8; ++i)
{
output_b(x); 
delay_ms(100);
x=x<<1;
if(input(pin_d0)==1)
break;
}
}
int y=128;
if(input(pin_d1)==1)
{
for(int i=0; i<8; ++i)
{
output_b(y); 
delay_ms(100);
y=y>>1;
if(input(pin_d1)==1)
break;
}
}
}
}
