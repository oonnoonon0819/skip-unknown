#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int intelligence, stamina, charisma, total;

    srand(time(NULL)); // 乱数生成器の初期化

    do {
        intelligence = rand() % 20+1;
        stamina = rand() % 20+1;
        charisma = rand() % 20+1;
        total = intelligence + stamina + charisma;
    } while (total != 20);

    printf("Intelligence: %d\n", intelligence);
    printf("Stamina: %d\n", stamina);
    printf("Charisma: %d\n", charisma);

    // クラスを決定
    if (intelligence >= stamina && intelligence >= charisma) {
        printf("Class: Mage\n");
    } else if (stamina > intelligence && stamina >= charisma) {
        printf("Class: Knight\n");
    } else {
        printf("Class: Thief\n");
    }

    return 0;
}
