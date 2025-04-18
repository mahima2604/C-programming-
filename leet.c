#include <stdlib.h>
#include <string.h>

char* countAndSay(int n) {
    if (n == 1) {
        char* base = (char*)malloc(2);
        strcpy(base, "1");
        return base;
    }

    char* prev = countAndSay(n - 1);
    int len = strlen(prev);
    char* result = (char*)malloc(len * 2 + 1);  // Max size needed
    int idx = 0;

    for (int i = 0; i < len; ) {
        char digit = prev[i];
        int count = 1;

        while (i + 1 < len && prev[i] == prev[i + 1]) {
            count++;
            i++;
        }

        // Add count and digit to result
        result[idx++] = count + '0';
        result[idx++] = digit;
        i++;
    }

    result[idx] = '\0';
    free(prev);  // Free memory used by the previous string
    return result;
}
