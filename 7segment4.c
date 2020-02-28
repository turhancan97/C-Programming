#include <16f877.h>//Kütüphaneden denetleyici Özelliklerini getirir.
#fuses XT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOPUT, NOWRT, NODEBUG, NOCPD
#USE delay(clock=4M)//Osilatör hýzý 4MHz olarak ayarlýyoruzc1
#define use_portb_lcd TRUE
#define RTC_SCLK PIN_c1
#define RTC_IO PIN_c3
#define RTC_RST PIN_c2
#include "ds1302.c"
#include "lcd.c"
int saniye,dakika,saat,gun,ay,yil,haftanin_gunu;

Void Main(void) { //Ana program baþlangýcý

lcd_init();
rtc_init();
rtc_set_datetime(25,2,20,3,23,55);

while(1);
{

rtc_get_time(saat,dakika,saniye);
rtc_get_date(gun,ay,yil,haftanin_gunu);
printf(lcd_putc,"\   %02d/%02d/%02d\n",gun,ay,yil);

switch(haftanin_gunu)
{
case 1: printf(lcd_putc,"PAZ"); break;
case 2: printf(lcd_putc,"PZT"); break;
case 3: printf(lcd_putc,"SAl"); break;
case 4: printf(lcd_putc,"CAR"); break;
case 5: printf(lcd_putc,"PER"); break;
case 6: printf(lcd_putc,"CUM"); break;
case 7: printf(lcd_putc,"CTS"); break;
}
printf(lcd_putc,"   %02d:%02d:%02d",saat,dakika,saniye);
delay_ms(1000);
}
}
