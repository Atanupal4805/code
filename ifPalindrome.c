#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int i, len, signal = 0;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    // Remove newline character from fgets
    a[strcspn(a, "\n")] = '\0';

    len = strlen(a);
    for (i = len - 1; i >= 0; i--) {
        b[len - i - 1] = a[i];
    }
    b[len] = '\0';

    for (i = 0; i < len; i++) {
        if (a[i] != b[i]) {
            signal = 1;
            break;
        }
    }

    if (signal == 0) {
        printf("'%s' is a palindrome.\n", a);
    } else {
        printf("'%s' is not a palindrome.\n", a);
    }

    return 0;
}
