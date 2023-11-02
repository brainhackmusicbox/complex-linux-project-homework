#include <ctype.h>

void toUpperCase(char* str) {
    for (; (*str = toupper(*str)) ; str++);
}
