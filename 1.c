#include <stdio.h>
#include <string.h>

int main() {
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  char letter = 'k';
  int index = -1;
    
  int alphabet_size = sizeof(alphabet) / sizeof(alphabet[0]);
    
  for( int i = 0; i < alphabet_size; i++ ) {
    if ( alphabet[i] == letter ) {
    index = i + 1;
    break;
    }
  }
  
  if ( index != -1 ){
    printf( "Буква '%c' находится на позиции '%d'", letter, index );
  }
  else {
    printf( "Буква '%c' не найдена\n", letter );
  }
  
  return 0;
}
