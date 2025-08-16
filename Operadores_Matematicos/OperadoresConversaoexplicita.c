#include <stdio.h>

int main() {
    //declara as variaveis
    int a = 10;
    int b = 3;
    //explicitamente o quociente é convertido em float
    float quociente = (float) a / b; // 'a' é convertido explicitamente para float

    printf("Quociente: %.2f\n", quociente);

    return 0;
}