#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char c;
    int line_cnt, word_cnt, char_cnt;

    line_cnt = word_cnt = char_cnt = 0;
  
    file = fopen(argv[1], "r");
    if (!file) {
        return (-1);
    }

    while ((c = getc(file)) != EOF) {
        char_cnt++;
        if (c == ' ' || c == '\t' || c == '\n') { word_cnt++; }
        if (c == '\n') { line_cnt++; }
    }

    fclose(file);
    printf("%d %d %d %s\n", line_cnt, word_cnt, char_cnt, argv[1]);

    return 0;
}
