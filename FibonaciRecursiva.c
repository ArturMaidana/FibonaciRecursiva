//fibonnaci recursiva
#include<stdio.h>

int fibonacci(int n) {
 if ((n == 0) || (n == 1))
 return(n);
 return fibonacci(n-1) + fibonacci(n-2);
}


int main() {
 int n,i;
 
 printf("Digite o numero de termos da sequencia: ");
 scanf("%d", &n);
 
 while(n <= 0) {
  printf("Numero incorreto. Digite o numero de termos da sequencia: ");
  scanf("%d", &n);
 }
 
 for (i = 1; i <= n; i++) {
  printf("%d ", fibonacci(i));
 }
 printf("\n");
 return(0);
}