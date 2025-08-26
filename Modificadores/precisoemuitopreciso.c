#include <stdio.h>
int main() {
    double numeroPreciso = 3.14159265358979323846; // valor de pi com alta precisão
    long double numeroMuitoPreciso = 3.141592653589793455644656578989748948238;

    printf("Número preciso (double): %.20f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.20Lf\n", numeroMuitoPreciso);

}