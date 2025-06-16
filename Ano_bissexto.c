#include <stdio.h>

int main() {
 int ano = 0;
    printf("Insira um ano:\n");
scanf("%d", &ano);
if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400  == 0)){
    printf("O ano é bissexto, menos feriádokkjk");
}else{
    printf("Mais um ano");
}
    return 0;
}
