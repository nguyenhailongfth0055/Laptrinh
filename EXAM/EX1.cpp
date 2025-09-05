#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    scanf("%99s", s1);

    printf("Enter second string: ");
    scanf("%99s", s2);

    char *shorter, *longer;
    if (strlen(s1) < strlen(s2)) {
        shorter = s1;
        longer = s2;
    } else {
        shorter = s2;
        longer = s1;
    }

    int lenShorter = strlen(shorter);
    int lenLonger  = strlen(longer);
    int found = 0;

    for (int i = 0; i <= lenLonger - lenShorter && !found; i++) {
        int j = 0;
        while (j < lenShorter && longer[i + j] == shorter[j]) {
            j++;
        }
        if (j == lenShorter) {
            found = 1; 
        }
    }
    printf(found ? "Yes\n" : "No\n");
    return 0;
}

