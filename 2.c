#include <stdio.h>
#include <string.h>

int main() {
  char word[] = "yellow";
  char result[3]; 
  int start = 0; 
  int end = 3;   

  int j = 0; 
  for ( int i = start; i < end; i++ ) {
    result[j] = word[i];
    j++;
  }
  result[j] = '\0'; 

  printf( "Слово без low: %s\n", result );

  return 0;
}
