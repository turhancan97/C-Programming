// LCD module connections
sbit LCD_RS at RE1_bit;
sbit LCD_EN at RE0_bit;
sbit LCD_D4 at RB4_bit;
sbit LCD_D5 at RB5_bit;
sbit LCD_D6 at RB6_bit;
sbit LCD_D7 at RB7_bit;

sbit LCD_RS_Direction at TRISE0_bit;
sbit LCD_EN_Direction at TRISE1_bit;
sbit LCD_D4_Direction at TRISB4_bit;
sbit LCD_D5_Direction at TRISB5_bit;
sbit LCD_D6_Direction at TRISB6_bit;
sbit LCD_D7_Direction at TRISB7_bit;
void main() {
  // Configure AN pins as digital I/O
  ANSELB=0;
  ANSELE=0;
  TRISB=0x00;
  TRISE=0x00;
  PORTB=0x00;
  PORTE=0x00;
  // For LCD
  Lcd_Init();                       // Initialize LCD
  turhan:                           // After the code finish, it will come here
  Lcd_Cmd(_LCD_CLEAR);              // Clear display
  Lcd_Cmd(_LCD_CURSOR_OFF);         // Cursor off
  Lcd_Out(1,1,"TurhanCan Kargin");  // Write text in first row
  Lcd_Out(2,8,"150403005");         // Write text in second row
  Delay_ms(1000);
  // From here we scroll
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,2,"TurhanCan Kargin");
  Lcd_Out(2,7,"150403005");
  Delay_ms(250);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,3,"TurhanCan Kargin");
  Lcd_Out(2,6,"150403005");
  Delay_ms(250);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,4,"TurhanCan Kargin");
  Lcd_Out(2,5,"150403005");
  Delay_ms(250);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,5,"TurhanCan Kargin");
  Lcd_Out(2,4,"150403005");
  Delay_ms(250);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,6,"TurhanCan Kargin");
  Lcd_Out(2,3,"150403005");
  Delay_ms(250);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,7,"TurhanCan Kargin");
  Lcd_Out(2,2,"150403005");
  Delay_ms(250);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,8,"TurhanCan Kargin");
  Lcd_Out(2,1,"150403005");
  Delay_ms(250);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,9,"TurhanCan Kargin");
  Lcd_Out(2,0,"150403005");
  Delay_ms(250);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,10,"TurhanCan Kargin");
  Lcd_Out(2,-1,"150403005");
  Delay_ms(250);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,11,"TurhanCan Kargin");
  Lcd_Out(2,-2,"150403005");
  Delay_ms(5000);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,10,"TurhanCan Kargin");
  Lcd_Out(2,-1,"150403005");
  Delay_ms(500);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,9,"TurhanCan Kargin");
  Lcd_Out(2,0,"150403005");
  Delay_ms(500);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,8,"TurhanCan Kargin");
  Lcd_Out(2,1,"150403005");
  Delay_ms(500);
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(1,7,"TurhanCan Kargin");
  Lcd_Out(2,2,"150403005");
  Delay_ms(500);
  Lcd_Cmd(_LCD_CLEAR);
  Delay_ms(500);
  goto turhan;  // when it will scroll 4 times, the code will start from beginning
}