#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc <= 2) {
        printf("usage: %s <variable name> <target program name>\n", argv[0]);
        return 1;
    }
    char* addr = getenv(argv[1]);
    if (addr == NULL) {
        printf("variable %s not defined\n", argv[1]);
        return 2;
    }
    addr += (strlen(argv[0]) - strlen(argv[2])) * 2;
    printf("%p\n", addr);
    return 0;
}
