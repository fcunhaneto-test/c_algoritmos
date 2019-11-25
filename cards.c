#include <stdio.h>

int main() {

    // char *cards = "JQK"; // 0-J 1-Q 2-K -> causa um erro pois cards é um ponteiro mas "JQK" é guarda como uma constate
    char cards[] = "JQK";   //  0-J 1-Q 2-K -> causa agora cards é um array e apesar "JQK" ser guardado como uma constante ele possui
                            // eles possui uma copia também no stack como um array.

    char a_card = cards[2]; // a_card = K

    cards[2] = cards[1]; // 0-J 1-Q 2-Q
    cards[1] = cards[0]; // 0-J 1-J 2-Q
    cards[0] = cards[2]; // 0-Q 1-J 2-Q
    cards[2] = cards[1]; // 0-J 1-Q 2-Q
    cards[1] = a_card; // 0-J 1-K 2-Q
    puts(cards);

    return 0;
}