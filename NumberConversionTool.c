#include <stdio.h>

int main() {
    int choice;
    int decimal;
    long long binary;
    int octal;
    int hexadecimal;

    printf("Select conversion type:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Binary to Decimal\n");
    printf("5. Binary to Octal\n");
    printf("6. Binary to Hexadecimal\n");
    printf("7. Octal to Binary\n");
    printf("8. Octal to Decimal\n");
    printf("9. Octal to Hexadecimal\n");
    printf("10. Hexadecimal to Binary\n");
    printf("11. Hexadecimal to Decimal\n");
    printf("12. Hexadecimal to Octal\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter decimal number: ");
            scanf("%d", &decimal);
            printf("Binary representation: %o\n", decimal);
            break;

        case 2:
            printf("Enter decimal number: ");
            scanf("%d", &decimal);
            printf("Octal representation: %o\n", decimal);
            break;

        case 3:
            printf("Enter decimal number: ");
            scanf("%d", &decimal);
            printf("Hexadecimal representation: %X\n", decimal);
            break;

        case 4:
            printf("Enter binary number: ");
            scanf("%lld", &binary);
            printf("Decimal representation: %d\n", binary);
            break;

        case 5:
            printf("Enter binary number: ");
            scanf("%lld", &binary);
            printf("Octal representation: %o\n", binary);
            break;

        case 6:
            printf("Enter binary number: ");
            scanf("%lld", &binary);
            printf("Hexadecimal representation: %X\n", binary);
            break;

        case 7:
            printf("Enter octal number: ");
            scanf("%o", &octal);
            printf("Binary representation: %lld\n", octal);
            break;

        case 8:
            printf("Enter octal number: ");
            scanf("%o", &octal);
            printf("Decimal representation: %d\n", octal);
            break;

        case 9:
            printf("Enter octal number: ");
            scanf("%o", &octal);
            printf("Hexadecimal representation: %X\n", octal);
            break;

        case 10:
            printf("Enter hexadecimal number: ");
            scanf("%X", &hexadecimal);
            printf("Binary representation: %lld\n", hexadecimal);
            break;

        case 11:
            printf("Enter hexadecimal number: ");
            scanf("%X", &hexadecimal);
            printf("Decimal representation: %d\n", hexadecimal);
            break;

        case 12:
            printf("Enter hexadecimal number: ");
            scanf("%X", &hexadecimal);
            printf("Octal representation: %o\n", hexadecimal);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

