/* Übung 2.c (AGS 3.1.2 (c))
 * (Primzahlen von 1 bis 1000)
 */

#include <stdio.h>

#define MAX 1000

int main(int args, char** argv){
    // Bool'scher Wert für jedes n ≤ MAX
    int is_prime[MAX + 1];

    // 0 und 1 sine keine Primzahlen
    is_prime[0] = 0;
    is_prime[1] = 0;
    
    // markiere alle anderen Zahlen vorerst als mögliche Primzahlen
    for (int i = 2; i <= MAX; i++) {
        is_prime[i] = 1;
    }
    
    // falls eine Zahl nicht prim ist, ist sie das Vielfache einer kleineren Primzahl;
    // für jede Primzahl p ∈ ℕ und jedes i ∈ ℕ mit i ≥ 2 markieren wir p ⋅ i als nicht-prim
    for (int p = 2; p < MAX / 2; p++) {
        if (is_prime[p]) {
            for (int i = 2; p * i <= MAX; i++) {
                is_prime[p * i] = 0;
            }
        }
    }

    // gebe alle gefundenen Primzahlen aus
    for (int i = 0; i <= MAX; i++) {
        if (is_prime[i] == 1)
            printf("%d ", i);
    }

    return 0;
}