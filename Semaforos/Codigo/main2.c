
#include <main2.h>

int contarCarroVertical; // Variavel usado para contar os carros de vertical para poder definir melhor pioridade
int contarCarroHorizotal; // Variavel usado para contar os carros de vertical para poder definir melhor pioridade

void main()
{

  
   while(TRUE)
   {
   // Inico do codico de simafamoro a funcionar normalmente sem difinir nenhuma Perioridade.
        output_high(pin_D5); // para acender a luz verde do Simafore de Veiculuos Horizoral.
         output_low(pin_D4);  
         output_low(pin_D3);
         
         output_low(pin_D2); 
         output_low(pin_D1);
         output_high(pin_D0); // para acender a luz vermelha do simafore de Vertical
         delay_ms(1000);
         
            output_low(pin_D5); 
            output_high(pin_D4); // para acender a luz amarela de simafore de veiculos Horizontal
            output_low(pin_D3);
            
            output_low(pin_D2);
            output_low(pin_D1);
            output_high(pin_D0); // Quando a luz amerela tiver acesso o simafore de Vertical continua com a vermelha acessa
            delay_ms(300);
            
                        
            output_low(pin_D5); 
            output_low(pin_D4);
            output_high(pin_D3); // para acender a luz vermelha do simafore de veiculos horizontal.
            
            output_high(pin_D2); // para acender a luz verde de simafore de Vertical
            output_low(pin_D1);
            output_low(pin_D0);
            delay_ms(1000);
            
        
   if (input(pin_B6)==1){ // quando o sensor veiculo for acionado
     contarCarroHorizontal++; // Conta os Veiculos existentes na Horizontal
     
     if (contarCarroHorizontal> contarCarroVertical){ // Se os veiculos de Horizotal forem Maior deve ser com o codigo a baixo
     
         output_high(pin_D5); // para acender a luz verde do Simafore de Veiculuos Horizontal.
         output_low(pin_D4);  
         output_low(pin_D3);
         
         output_low(pin_D2); 
         output_low(pin_D1);
         output_high(pin_D0); // para acender a luz vermelha do simafore Vertical
         delay_ms(1000);
                                                     }
         
   }
         
        if (input(pin_B7)==1){ // quando o sensor for acionado de veiculos Vertical
         contarCarroVertical ++; // Conta os Veiculos existentes na Vertical
         
         if (contarCarroVertical> contarCarroHorizontal){
                                                   
            output_low(pin_D5); 
            output_low(pin_D4);
            output_high(pin_D3); // para acender a luz vermelha do simafore de veiculos Horizotal.
            
            output_high(pin_D2); // para acender a luz verde de simafore de Veiculo Vertical
            output_low(pin_D1);
            output_low(pin_D0);
            delay_ms(1000);
                                                        }
            contarCarroVertical--; // Para reduz a contagem dos veiculos na Vertical
            contarPedestre --; // Decrimento serve para subtrair os pedestre.
        }
              
                             
   }

}
