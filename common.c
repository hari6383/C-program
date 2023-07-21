#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* findCommonSubstring(char** names, int size) {
    int i, j;
    int minLength = strlen(names[0]);


    for (i = 1; i < size; i++) {
        int len = strlen(names[i]);
        if (len < minLength)
            minLength = len;
    }


    char* commonSubstring = (char*)malloc((minLength + 1) * sizeof(char));
    for (i = 0; i < minLength; i++) {
        char ch = names[0][i];
        for (j = 1; j < size; j++) {
            if (tolower(names[j][i]) != tolower(ch)) {
                commonSubstring[i] = '\0';
                return commonSubstring;
            }
        }
        commonSubstring[i] = tolower(ch);
    }
    commonSubstring[minLength] = '\0';

    return commonSubstring;
}

int main() {
    int size;
    scanf("%d", &size);
    getchar();

    char** names = (char**)malloc(size * sizeof(char*));
    for (int i = 0; i < size; i++) {
        names[i] = (char*)malloc(100 * sizeof(char));
        scanf("%s", names[i]);
    }

    char* result = findCommonSubstring(names, size);
    printf("%s\n", result);


    for (int i = 0; i < size; i++) {
        free(names[i]);
    }
    free(names);
    free(result);

    return 0;
}
