#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1 to 12): ");
    scanf("%d", &month);

    switch ((month - 1) / 3) {
        case 0:
            printf("Season: Summer");
            break;
        case 1:
            printf("Season: Autumn");
            break;
        case 2:
            printf("Season: Rainy");
            break;
        case 3:
            printf("Season: Winter");
            break;
        default:
            printf("Invalid month");
    }

    return 0;
}