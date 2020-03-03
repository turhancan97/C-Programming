#include <16f877.h>//K�t�phaneden denetleyici �zelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilat�r h�z� 4MHz olarak ayarl�yoruzc1
#include "ds18b20.c"
#include "lcd.c"
#define use_portb_lcd TRUE

Void main() { //Ana program ba�lang�c�
float temperature;
lcd_init();
lcd_putc("\f"); // temizle ve turhan can yaz
while(1)
{
temperature = ds1820_read();
printf(lcd_putc,"Sicaklik: \n %3.1f derece  ", temperature);
delay_ms(250);
}
}

