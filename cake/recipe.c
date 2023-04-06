#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int secret_len = 0;

/* void bprintf(char string[]) { */
/*     printf("{"); */
/*     for (int i = 0; i < secret_len; i++) { */
/*         printf("0x%.2x,", string[i]); */
/*     } */
/*     printf("0x00}\n"); */
/* } */

void prepare(char secret_ingredient[]) {
    puts("prepin...");
    for (int i = 0; i < secret_len; i++) {
        secret_ingredient[i] =
            'a' + (secret_ingredient[i] - 2 * 'a' + 'n') % 26;
    }
    puts("done");
}

void whisk_and_mix(char secret_ingredient[]) {
    puts("whiskin...");
    puts("done");
    for (int i = 0; i < secret_len / 2; i++) {
        for (int j = 0; j < secret_len; j++) {
            secret_ingredient[j] ^= secret_ingredient[(j+secret_len-1)%secret_len];
            secret_ingredient[(j+secret_len-1)%secret_len] ^= secret_ingredient[j];
            secret_ingredient[j] ^= secret_ingredient[(j+secret_len-1)%secret_len];
        }
    }
    puts("mixin...");
    puts("done");
}

void bake_and_frost(char secret_ingredient[]) {
    puts("bakin...");
    puts("done...");
    for (int i = 0; i < (2 << secret_len); i++) {
        for (int j = 0; j < secret_len; j++) {
            secret_ingredient[j] ^=
                secret_ingredient[(j + secret_len - 1) % secret_len];
        }
    }
    puts("frostin...");
    puts("done...");
}

int taste_cake(char the_cake[]) {
    char the_best_cake[23]={0x3c,0x4e,0x14,0x70,0x6e,0x42,0x70,0x10,0x29,0x0e,0x37,0x6e,0x11,0x13,0x54,0x74,0x27,0x02,0x54,0x33,0x68,0x35,0x6a};
    int taste = 1;
    for (int i = 0; i < secret_len; i++) {
        taste &= the_cake[i] == the_best_cake[i];
    }
    return taste;
}

void serve_the_cake(char cake[]) {
    if (taste_cake(cake) != 1) {
        puts("You cannot just make a secret ingredient up. (-_-)");
        /* bprintf(cake); */
        exit(0);
    }
    FILE* file = fopen("flag.txt", "r");
    if (file == NULL) {
        puts("file not found\n");
        puts("If you are on a remote server contact the admin asap.");
        puts(
            "If you are on your local machine, create a flag.txt so that you "
            "can debug easily.");
        exit(1);
    }
    char flag[64];
    fgets(flag, 64, file);
    puts(flag);
}

char* bake_a_cake(char secret_ingredient[]) {
    void (*recipe[])(char[]) = {prepare, whisk_and_mix, bake_and_frost};
    for (int i = 0; i < 3; i++) {
        (*recipe[i])(secret_ingredient);
    }
    return secret_ingredient;
}

int main() {
    puts("The best cake has the best of secret ingredients");
    puts("What is your best secret ingredient?");
    char secret_ingredient[32];
    read(1, secret_ingredient, 32);
    for (int i = 0; i < 32; i++) {
        secret_ingredient[i] =
            secret_ingredient[i] == '\n' ? 0 : secret_ingredient[i];
    }
    secret_len = strlen(secret_ingredient);
    if (secret_len != 23) {
        puts("You are not someone who is supposed to know the super secret ingredient.");
        exit(0);
    }
    char* cake = bake_a_cake(secret_ingredient);
    serve_the_cake(cake);
}
