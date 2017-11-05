/* Übung 3 (AGS 3.1.6)
 * Berechnung der Fakultät
 */

 #include <stdio.h>

 int main(int args, char** argv) {
    int n, result = 1;
    scanf("%d", &n);

    if (n <= 0) {
        return 1;
    }

    for (n; n > 0; n--) {
        result *= n;
    }

    printf("%d", result);

    return 0;
 }