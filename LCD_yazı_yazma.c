#include <16f877.h>//K�t�phaneden denetleyici �zelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilat�r h�z� 4MHz olarak ayarl�yoruzc1

#include "lcd.c"


Void main() { //Ana program ba�lang�c�

lcd_init();
lcd_putc("\Turhan Can"); // temizle ve turhan can yaz
//lcd_gotoxy(1,2); // 1.sat�r 2. sutuna git (alttaki kod yerine olabilir)
lcd_putc("\nKargin"); // alt sat�ra ge� kargin yaz


}
