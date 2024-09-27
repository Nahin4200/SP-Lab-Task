#include <stdio.h>

int main() {
    int A, B, C;
   printf("enter number :");
    scanf("%d %d %d", &A, &B, &C);

  if (A>=B){
    if (A>=C){
        printf("largest number is: %d\n",A);
    }else{
    printf("largest number is: %d\n",C);
    }
  }else{
  if (B>=C){
    printf("largest number is: %d\n",B);
  }else{
  printf("largest number is: %d\n",C);
  }

  }


    return 0;
}
