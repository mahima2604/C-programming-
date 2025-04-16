#include <string.h>
#include <stdio.h>
int main() {
    char str[1000];
    scanf("%[^\n]", str);
    int len = strlen(str);
    int start = 0, end = 0;
    for (int i = 0; i <= len; i++) {
      if (str[i] == ' ' || str[i] == '\0') {
        end = i - 1;
        for (int j = end; j >= start; j--) {
          printf("%c", str[j]);
          }
          if (str[i] == ' ') {
             printf(" ");
             }
             start = i + 1;
      }
  }
    return 0;
}
