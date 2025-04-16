#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int length = strlen(binary);
    int i;

    for (i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }

    return decimal;
}

int main() {
    char binary[100];
    int result;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    result = binaryToDecimal(binary);
    printf("Decimal: %d\n", result);
    getch();
    return 0;
}
