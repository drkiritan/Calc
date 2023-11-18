#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void slowMsg(char* msg, int wait_time)
{
    int i = 0;
    while(msg[i] != '\0')
    {
        printf("%c", msg[i]);
        usleep(wait_time);
        fflush(stdout);
        i++;
    }
}

int main(void)
{
    system("clear");
    printf("\x1b[32m");

    putchar('\n');
    slowMsg("Initializing", 100000);
    slowMsg("... ", 1000000);
    putchar('\n');
    putchar('\n');
    slowMsg("837E834E81755982B382F182CC82B182C682CD\n", 30000);
    slowMsg("82E082A4965982EA82BD82D982A482AA\n", 30000);
    slowMsg("82A282A282C68E7682A282DC82B78176... ", 30000);
    putchar('\n');
    putchar('\n');
    slowMsg("838B834A8175918A95CF82ED82E782B8\n", 30000);
    slowMsg("96A297FB82AA82DC82B582A282C88176... ", 30000);
    putchar('\n');
    putchar('\n');
    slowMsg("8357837E817592FA82DF82AA88AB82A282E68176", 30000);
    slowMsg("... ", 800000);
    putchar('\n');
    putchar('\n');
    putchar('\n');
    puts("  \x1b[42m      \x1b[49m              \x1b[42m  \x1b[49m");
    puts("\x1b[42m  \x1b[49m      \x1b[42m  \x1b[49m    \x1b[42m    \x1b[49m    \x1b[42m  \x1b[49m    \x1b[42m      \x1b[49m");
    puts("\x1b[42m  \x1b[49m                \x1b[42m  \x1b[49m  \x1b[42m  \x1b[49m  \x1b[42m  \x1b[49m");
    puts("\x1b[42m  \x1b[49m            \x1b[42m      \x1b[49m  \x1b[42m  \x1b[49m  \x1b[42m  \x1b[49m");
    puts("\x1b[42m  \x1b[49m      \x1b[42m  \x1b[49m  \x1b[42m  \x1b[49m    \x1b[42m  \x1b[49m  \x1b[42m  \x1b[49m  \x1b[42m  \x1b[49m");
    puts("  \x1b[42m      \x1b[49m      \x1b[42m      \x1b[49m  \x1b[42m  \x1b[49m    \x1b[42m      \x1b[49m  \x1b[42m  \x1b[49m");
    putchar('\n');
    putchar('\n');
    usleep(1000000);
    slowMsg("8357837E815B817581638163\n", 30000);
    slowMsg("28814C8145\n", 30000);
    slowMsg("81CD8145814D29\n", 30000);
    slowMsg("816381638176... ", 30000);
    putchar('\n');
    putchar('\n');
    printf("\x1b[0m");

    return 0;
}

// 83 7E 83 4E 81 75 59 82 B3 82 F1 82 CC 82 B1 82 C6 82 CD 82 E0 82 A4 96 59 82 EA 82 BD 82 D9 82 A4 82 AA 82 A2 82 A2 82 C6 8E 76 82 A2 82 DC 82 B7 81 76
// 83 8B 83 4A 81 75 91 8A 95 CF 82 ED 82 E7 82 B8 96 A2 97 FB 82 AA 82 DC 82 B5 82 A2 82 C8 81 76
// 83 57 83 7E 81 75 92 FA 82 DF 82 AA 88 AB 82 A2 82 E6 81 76
// 83 57 83 7E 81 5B 81 75 81 63 81 63 28 81 4C 81 45 81 CD 81 45 81 4D 29 81 63 81 63 81 76