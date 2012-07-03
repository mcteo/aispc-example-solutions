#include <iostream>
#include <string>

using namespace std;

int main() {

    printf("Please enter a word: ");

    string word = "";

    cin >> word;

    int length = word.length(), center;

    if ((length % 2) == 0) {
        center = length / 2;
    } else {
        center = (length - 1) / 2;
    }

    length--;

    int iter;
    for (iter = 0; iter < center; iter++) {
        if (word[iter] != word[length - iter]) {
            cout << "The word " << word << " is not a palindrome" << endl;
            return 0;
        }
    }

    cout << "The word " << word << " is a palindrome" << endl;

    return 0;
}

