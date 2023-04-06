#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(rand());
    puts("How many seeds do i have?");
    for (int i = 0; i < 100; i++) {
        int guess;
        scanf("%d", &guess);
        if (guess != rand() % 100000) {
            puts("Nope");
            exit(0);
        }
        puts("You must be lucky");
    }

    FILE* flag = fopen("flag.txt", "r");
    if (flag == NULL) {
        puts("flag not found.");
        puts(
            "If you are running this on the remote server, contact the admin "
            "immediately.");
        puts(
            "If you are running this on your local machine, create a flag.txt "
            "with a dummy flag for debugging purpose.");
        fflush(stdout);
        exit(0);
    }
    char buf[60];
    fgets(buf, 59, flag);
    printf("It cannot be!\n(;_;)\nMy precious flag: %s\n", buf);
}
