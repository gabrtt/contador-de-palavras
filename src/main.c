/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c;
  int space, flut;
  c = 1, space = 0, flut = 0;    
  
  while (c != '\n') {
    scanf("%c", &c);
    while(!(((c >= 48)&&(c <= 57))||((c >= 65)&&(c <= 90))||((c >= 97)&&(c <= 122))) && (c != '\n')){
        scanf("%c", &c); 
    }
    
    while(((c >= 65)&&(c <= 90))||((c >= 97)&&(c <= 122))){
        scanf("%c", &c);  
        if(!(((c >= 48)&&(c <= 57))||((c >= 65)&&(c <= 90))||((c >= 97)&&(c <= 122))))
            space++;
    }
    
    while((c >= 48)&&(c <= 57)){
        scanf("%c", &c); 
      
        if(c == ' ')
            space++;
        
        if ((c == ',')||(c == '.')){
            flut++;
        }
        
        if(flut == 2){
            space++;
            flut = 0;
        }
    }
   
  }

  printf("%d\n", space);
  
  return 0;
}
