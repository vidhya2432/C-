#include <stdio.h>
using namespace std;

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num >= 80 ? 80 : (num >= 50 ? 50 : 0)) {
        case 80:
            printf("Definitely eligible to enter into Elite");
            break;

        case 50:
            printf("Have change to enter into Elite");
            break;

        case 0:
            printf("Not eligible to enter into Elite");
            break;

        default:
            printf("Invalid input");
    }

    return 0;
}