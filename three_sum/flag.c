#include <stdio.h>
#include <stdlib.h>

int overflew(int sum, int a, int b, int c) {
    return a > 0 && b > 0 && c > 0 && sum <= 0;
}

int main() {
    int num1, num2, num3, sum;
    FILE *flag;
    char c;

    puts("n1 > n1 + n2 + n3 AND n2 > n1 + n2 + n3 AND n3 > n1 + n2 + n3");
    fflush(stdout);
    puts("What three positive numbers can make this possible: ");
    fflush(stdout);

    if (scanf("%d", &num1) && scanf("%d", &num2) && scanf("%d", &num3)) {
        printf("You entered %d, %d and %d\n", num1, num2, num3);
        fflush(stdout);
        sum = num1 + num2 + num3;
        if (overflew(sum, num1, num2, num3)) {
            puts("You have an integer overflow.");
            fflush(stdout);
            exit(0);
        } else {
            puts("Is there no overflow?");
            puts("OR is the cpu trippin?");
            fflush(stdout);
        }

        if (sum < num1 && sum < num2 && sum < num3 && num1 > 0 && num2 > 0 && num3 > 0) {
            flag = fopen("flag.txt","r");
            if(flag == NULL){
                puts("flag not found.");
                puts("If you are running this on the remote server, contact the admin immediately.");
                puts("If you are running this on your local machine, create a flag.txt with a dummy flag for debugging purpose.");
                fflush(stdout);
                exit(0);
            }
            char buf[60];
            fgets(buf, 59, flag);
            printf("YOUR FLAG IS: %s\n", buf);
            fflush(stdout);
            exit(0);
        }else {
            puts("Then again, where is the flag?");
        }
    }
    return 0;
}
