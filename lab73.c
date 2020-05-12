// Keypad module connections
char  keypadPort at PORTD;
// Keypad module connections
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
// Assignments
char display1[4];
char display2[4];
char i;
char j;
char k;
unsigned short kp, count, oldstate = 0;
char txt[6];
void main() {
  count = 5;                                // To write Counter in 5. columns
  Keypad_Init();                           // Initialize Keypad
  ANSELB = 0;                              // Configure AN pins as digital I/O
  ANSELD = 0;
  ANSELE = 0;
  Lcd_Init();                              // Initialize LCD
  Lcd_Cmd(_LCD_CLEAR);                     // Clear display
  Lcd_Cmd(_LCD_CURSOR_OFF);                // Cursor off

  Lcd_Out(1, 1, "Enter Four Digits");                 // Write message text on LCD
  Lcd_Out(2, 1, "After 2 seconds");
  delay_ms(2000);
  Lcd_Cmd(_LCD_CLEAR);                     // Clear display

  do {
    kp = 0;                                // Reset key code variable

    // Wait for key to be pressed and released
    do
      kp = Keypad_Key_Click();             // Store key code in kp variable
    while (!kp);
   // Prepare value for output, transform key to it's ASCII value
    switch (kp) {
      case  1: kp = 49; break; // 1
      case  2: kp = 50; break; // 2
      case  3: kp = 51; break; // 3
      case  4: kp = 65; break; // A
      case  5: kp = 52; break; // 4
      case  6: kp = 53; break; // 5
      case  7: kp = 54; break; // 6
      case  8: kp = 66; break; // B
      case  9: kp = 55; break; // 7
      case 10: kp = 56; break; // 8
      case 11: kp = 57; break; // 9
      case 12: kp = 67; break; // C
      case 13: kp = 42; break; // *
      case 14: kp = 48; break; // 0
      case 15: kp = 35; break; // #
      case 16: kp = 68; break; // D

    }

    Lcd_Chr(1,++count, kp);                    // Print key ASCII value on LCD
    Lcd_Out(1,8, ":");                         // for count-down
    delay_ms(100);

    if (count == 10) {                        //  when you enter four digit it will come here
      // From here, code is like second question
      Lcd_Cmd(_LCD_CLEAR);
      for (j=59;j>=0;j--)
    {
  ByteToStr(j, display1);
  Lcd_Out(1, 8, display1);
  Lcd_Out(1, 7, "1");
  Lcd_Out(1, 6, "0");
  Lcd_Out(1, 8, ":");
  Delay_ms(250);

  if (j == 0)
  {
  Lcd_Cmd(_LCD_CLEAR);
        for (i=59;i>=0;i--)
    {
  ByteToStr(i, display2);
  Lcd_Out(1, 8, display2);
  Lcd_Out(1, 7, "0");
  Lcd_Out(1, 6, "0");
  Lcd_Out(1, 8, ":");
  Delay_ms(250);
  if (i <= 0)
  {
    goto turhan;
  }
}
}
}
  while(1){
  turhan:
  Lcd_Out(1, 6, "00:00");
  }
}
    } while (1);
}