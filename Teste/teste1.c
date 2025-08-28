# include <stdio.h>

void main() {
    int num;
    printf("Entre com um numero inteiro:\n");
    scanf("%d", &num);
    num = num + num%3;
    printf("num = %d\n", num);
}