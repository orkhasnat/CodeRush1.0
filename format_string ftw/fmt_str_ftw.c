#include <stdio.h>
#include <stdlib.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);

	char* str1 = "Why are you looking at my stack?";
    char* str2 = "Go Back!";
    char* str3 = "How dare you??";
    char* str4 = "Its the last warning!";
	char* str5 = "coderush{us3_pr1ntf_w1s31y_t0_av01d_fmt_5tr1ng_3xpl01t4ti0n}";
    char* str6 = "Now you know what not to do to keep your secret";
    char* str7 = "Goodbye";
	
    
    printf("I think you're new here. Wanna say something?\n");

    char input[69];
    fgets(input, 69, stdin);
    printf(input);
}