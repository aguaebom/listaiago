#include <stdio.h>

int main() {
 int num1, num2, num3 = 0;
   printf("escreva 3 números inteiros:\n");
   scanf("%d", &num1);
   scanf("%d", &num2);
   scanf("%d", &num3);
   if (num1 >= num2 &&num1 >= num3){
       printf("%d é o maior\n", num1);
   }
  if (num2 >= num1 &&num2 >= num3){
      printf("%d é o maior\n", num2);
  }
  if (num3 >= num2 &&num3 >= num1){
      printf("%d é o maior\n", num3);
  }
    return 0;
}
