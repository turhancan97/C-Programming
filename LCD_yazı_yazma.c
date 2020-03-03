#include <16f877.h>//Kütüphaneden denetleyici Özelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilatör hýzý 4MHz olarak ayarlýyoruzc1

#include "lcd.c"


Void main() { //Ana program baþlangýcý

lcd_init();
lcd_putc("\Turhan Can"); // temizle ve turhan can yaz
//lcd_gotoxy(1,2); // 1.satýr 2. sutuna git (alttaki kod yerine olabilir)
lcd_putc("\nKargin"); // alt satýra geç kargin yaz


}
