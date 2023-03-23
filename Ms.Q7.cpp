7. Print the following hill pattern ,
Each line contains n characters = space+number
When n=5
        1        
     12
   123
 1234
12345
PROGRAM :
#include <stdio.h>
int main() {
  int i, j, rows;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  for (i = 1; i <= rows; ++i) {
     for (j = 1; j <= i; ++j) {
        printf("* ");
     }
     printf("\n");
  }
  return 0;
}
