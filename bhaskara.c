#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a, b, c, delta;
    float x1, x2;
    printf("escreva os valores de a, b e c da equacao do segundo grau: ");
    scanf("%d %d %d", &a, &b, &c);
    delta = b * b - 4 * a * c;
    if (a == 0) {
        printf("não é uma equação do segundo grau\n");
        return 1;
    }
     else if (b == 0 && c == 0) {
        printf("a equação é %d*x^2 = 0\n", a);
        printf("x = 0\n");
        return 0;
    } else if (b == 0) {
        printf("a equacao é %d*x^2 + %d = 0\n", a, c);
        printf("x = +/- %f\n", sqrt(-c/a));
        return 0;
    } else if (delta < 0){
        printf("a equação não possui raízes reais\n");
        return 0;
    } else if (delta == 0) {
        x1 = -b / (2.0 * a);
        printf("a equação possui uma raiz real: x = %f\n", x1);
        return 0;
    } else {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("as raízes da equação são: x1 = %f e x2 = %f\n", x1, x2);
        return 0;
    }
    
}