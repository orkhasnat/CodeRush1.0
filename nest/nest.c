#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    char str[] = "coderush{cuck00_0nly_c0m35_1n_5pr1ng}";
    puts(str);
    char flag[37];
    read(1, flag, 37);
    for (int i = 0; i < 37; i++) {
        flag[i] = flag[i] == '\n' ? 0 : flag[i];
    }
    int t = 1;
    t &= (t &
          (t &
           (t &
            (t &
             (t &
              (t &
               (t &
                (t &
                 (t &
                  (t &
                   (t &
                    (t &
                     (t &
                      (t &
                       (t &
                        (t &
                         (t &
                          (t &
                           (t &
                            (t &
                             (t &
                              (t &
                               (t &
                                (t &
                                 (t &
                                  (t &
                                   (t &
                                    (t &
                                     (t &
                                      (t &
                                       (t &
                                        (t &
                                         (t &
                                          (t &
                                           (t &
                                            (t & (t & (flag[19] == 'y')) &
                                             (flag[34] == 'n')) &
                                            (flag[9] == 'c')) &
                                           (flag[7] == 'h')) &
                                          (flag[5] == 'u')) &
                                         (flag[10] == 'u')) &
                                        (flag[12] == 'k')) &
                                       (flag[33] == '1')) &
                                      (flag[1] == 'o')) &
                                     (flag[14] == '0')) &
                                    (flag[31] == 'p')) &
                                   (flag[23] == 'm')) &
                                  (flag[22] == '0')) &
                                 (flag[24] == '3')) &
                                (flag[18] == 'l')) &
                               (flag[16] == '0')) &
                              (flag[28] == 'n')) &
                             (flag[35] == 'g')) &
                            (flag[8] == '{')) &
                           (flag[15] == '_')) &
                          (flag[26] == '_')) &
                         (flag[30] == '5')) &
                        (flag[3] == 'e')) &
                       (flag[11] == 'c')) &
                      (flag[32] == 'r')) &
                     (flag[13] == '0')) &
                    (flag[20] == '_')) &
                   (flag[29] == '_')) &
                  (flag[4] == 'r')) &
                 (flag[17] == 'n')) &
                (flag[21] == 'c')) &
               (flag[0] == 'c')) &
              (flag[27] == '1')) &
             (flag[2] == 'd')) &
            (flag[25] == '5')) &
           (flag[6] == 's')) &
          (flag[36] == '}'));
    if (t)
        puts("Yes! That's the saying.");
    else
        puts("No, that's not the saying.");
}
