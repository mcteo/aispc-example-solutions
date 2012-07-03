#include <stdio.h>

int main() {

    printf("Enter the diamond width, which must be a positive odd integer: ");

    int size;
    scanf("%d", &size);

    // shouldnt really be nessisary as usually you are guarenteed valid input
    if ((size % 2) == 0) {
        printf("Error: Number must be an odd number\n");
        return 1;
    }

    int count, index;
    for (count = 1; count < (size+1); count++) {
        for (index = 0; index < (size-count); index++) {
            printf(" ");
        }
        for (index = 0; index < count; index++) {
            printf("* ");
        }
        printf("\n");
    }

    for (count = 1; count < size; count++) {
        for (index = 0; index < count; index++) {
            printf(" ");
        }
        for (index = 0; index < (size-count); index++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

