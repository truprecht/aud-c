/* Übung 2.b (AGS 3.1.2 (b))
 * eine Multiplikationstabelle
 */

 #include <stdio.h>

int main(int args, char** argv){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}