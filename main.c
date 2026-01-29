#include <stdio.h>

int addition(int var1, int var2) {
    int result = var1 + var2;
    return result;
}

int main(void) {

    int var1;
    int var2;

    printf("Addition\n");

    printf("Geben sie die erste Zahl ein: \n");
    scanf("%d", &var1);
    printf("Geben sie die zweite Zahl ein: \n");
    scanf("%d", &var2);

    int result = addition(var1, var2);

    printf("Ergebnis: %d\n", result);

    return 0;
}
