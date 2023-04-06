#include <stdio.h>

void solve(char* a, char* b, int len) {
    for (int i = 0; i < len; i++) {
        printf("%c",a[i]^b[i]);
    }
}

int main() {
    long bytes = 0x271056073f596139;
    char known[] = "coderush";
    solve(&bytes,known,8);
}
