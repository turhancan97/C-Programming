#include <16f877.h>//Kütüphaneden denetleyici Özelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilatör hýzý 4MHz olarak ayarlýyoruzc1

#include "lcd.c"

void sola_kaydir(void) //fonksiyon 
{
lcd_send_byte(0,0x18); //sola kaydýrma komutu
}

void saga_kaydir(void)//fonksiyon
{
lcd_send_byte(0,0x1E); //saða kaydýrma komutu
}
Void main() { //Ana program baþlangýcý

lcd_init();
delay_ms(100);
lcd_putc("\Turhan Can Kargin"); // temizle ve turhan can yaz
delay_ms(100);
while(1)
{
for(int i=0; i<18; ++i)
{
sola_kaydir();
delay_ms(100);
}
for(int k=0; k<18; ++k){
saga_kaydir();
delay_ms(100);
}
}
}
