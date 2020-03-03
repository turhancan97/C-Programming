#include <16f877.h>//K�t�phaneden denetleyici �zelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilat�r h�z� 4MHz olarak ayarl�yoruzc1

#include "lcd.c"

void sola_kaydir(void) //fonksiyon 
{
lcd_send_byte(0,0x18); //sola kayd�rma komutu
}

void saga_kaydir(void)//fonksiyon
{
lcd_send_byte(0,0x1E); //sa�a kayd�rma komutu
}
Void main() { //Ana program ba�lang�c�

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
