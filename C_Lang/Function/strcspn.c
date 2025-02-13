#include <stdio.h>
#include <string.h>
 
#define SIZE 40
 
int main(void)
{
  char string[SIZE] = "This is the source string";
  char * substring = "axle";
 
  printf( "The first %i characters in the string \"%s\" "
          "are not in the string \"%s\" \n",
            strcspn(string, substring), string, substring);
 
}
 
/**********  Output should be similar to:  **************
 
The first 10 characters in the string "This is the source string"
are not in the string "axle"
*/