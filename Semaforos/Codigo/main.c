#include <main2.h>
 #define LCD_DATA_PORT getenv("SFR:PORTC") 
#include <lcd.c>

void main()
{

   lcd_init();
 printf(lcd_putc,"\f Escola Nautica \nMicroprocesador2 ");
 delay_ms(500);
 printf(lcd_putc, "\f Simulador PIC \n By Grupo-04");
   delay_ms(50);

   while(TRUE)
   {
   
// Inicio de Cogico para pedeste {
If (pin_B0==1){
output_high(pin_D3); 
output_low(pin_D4);
output_low(pin_D5);

output_high(pin_D0); 
output_low(pin_D1);
output_low(pin_D2);
delay_ms(500);

output_high(pin_D2); 
output_low(pin_D1);
output_low(pin_D0);
delay_ms(500);
}else{

// } Termo de cogico para pedeste


// Inico do codico de veiculos {
output_high(pin_D3); 
output_low(pin_D4);
output_low(pin_D5);
delay_ms(500);

output_high(pin_D5); 
output_low(pin_D4);
output_low(pin_D3);
delay_ms(500);

output_high(pin_D4); 
output_low(pin_D3);
output_low(pin_D5);
delay_ms(200);
// } Termo do veiculo
     }

   }

}
