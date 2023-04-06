#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define perfection 9223372036829802749

int main()
{
    setbuf(stdout, NULL);
    int con;
    con = 0;
    ll account_balance = 0;
    while(con == 0){
        printf("Welcome to the flag exchange\n");
        printf("We sell flags\n");
        printf("\n1. Check Account Balance\n");
        printf("\n2. Buy Flags\n");
        printf("\n3. Exit\n");
        int menu;
        printf("\n Enter a menu selection\n");
        fflush(stdin);
        scanf("%d", &menu);
        if(menu == 1){
            printf("\n\n\n Balance: %d \n\n\n", account_balance);
        }
        else if(menu == 2){
            printf("Currently for sale\n");
            printf("1. Defintely not the flag Flag\n");
            printf("2. 1337 Flag\n");
            int auction_choice;
            fflush(stdin);
            scanf("%d", &auction_choice);
            if(auction_choice == 1){
                printf("These knockoff Flags cost 2023 each, enter desired quantity\n");
                
                ll number_flags = 0;
                fflush(stdin);
                scanf("%lld", &number_flags);
                if(number_flags > 0){
                    ll total_cost = 0;
                    total_cost = 2023*number_flags;
                    printf("\nThe final cost is: %lld\n", total_cost);
                    if(total_cost <= account_balance){
                        account_balance = account_balance - total_cost;
                        printf("\nYour current balance after transaction: %lld\n\n", account_balance);
                    }
                    else{
                        printf("Not enough funds to complete purchase\n");
                    }
                }
            }
            else if(auction_choice == 2){
                printf("1337 flags requires %lld account balance\n", perfection);
                printf("Enter 1 to buy\n");
                int bid = 0;
                fflush(stdin);
                scanf("%d", &bid);
                
                if(bid == 1){
                    if(account_balance == perfection){
                        FILE *f = fopen("flag.txt", "r");
                        if(f == NULL){

                            printf("flag not found: please run this on the server\n");
                            exit(0);
                        }
                        char buf[64];
                        fgets(buf, 63, f);
                        printf("YOUR FLAG IS: %s\n", buf);
                        }
                    
                    else{
                        printf("\nAccount balance is not perfect\n\n\n");
                    }}

            }
        }
        else{
            con = 1;
        }
    }
    return 0;
}
