#include <stdio.h>
#include <string.h>

// the maximum input isn't specified, but it usually would be
#define MAX_LEN 100

int main() {

    printf("Please enter a word: ");

    char word[MAX_LEN] = "";

    fgets(word, MAX_LEN, stdin);

    int length = strlen(word), center;

    // just to remove the trailing newline
    length--;
    word[length] = '\0';

    if ((length % 2) == 0) {
        center = length / 2;
    } else {
        center = (length - 1) / 2;
    }

    length--;

    int iter;
    for (iter = 0; iter < center; iter++) {
        if (word[iter] != word[length - iter]) {
            printf("The word %s is not a palindrome\n", word);
            return 0;
        }
    }

    printf("The word %s is a palindrome\n", word);

    return 0;
}

