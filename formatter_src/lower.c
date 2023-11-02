#include <ctype.h>

void toLowerCase(char* str) {
    for (; (*str = tolower(*str)) ; str++);
}
