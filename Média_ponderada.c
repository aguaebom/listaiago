#include <stdio.h>

int main() {
int a,b,c,d,e,f,x,y,z,h,i,j,somam,soma,média = 0;
printf("insira os valores iniciais:\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);
scanf("%d",&f);
printf("insira os pesos dos valores:\n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    scanf("%d",&h);
    scanf("%d",&i);
    scanf("%d",&j);
somam = (a*x)+(b*y)+(c*z)+(d*h)+(e*i)+(f*j);
    soma= x+y+z+h+i+j;
    média= somam/soma;

printf("A média ponderada é:%d",média);
    return 0;
}
