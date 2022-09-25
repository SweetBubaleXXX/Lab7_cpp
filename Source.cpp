#include <iostream>

using namespace std;

int main() {
    char str[100] = "";
    char output_str[100] = "";

    puts("Enter string:");
    gets_s(str);
    int length_of_str = strlen(str);

    if (!length_of_str) {
        puts("Invalid string");
        return 1;
    }

    int cur_word_len = 0;
    for (int i = 0; i <= length_of_str; i++) {
        if (i != length_of_str && !isspace(str[i])) { cur_word_len++; continue; }
        else if (cur_word_len % 2 != 0) {
            strncat_s(output_str, &str[i - cur_word_len], cur_word_len + 1);
        }
        cur_word_len = 0;
    }

    puts("Output:");
    puts(output_str);

    return 0;
}