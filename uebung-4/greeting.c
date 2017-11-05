/* Übung 2.a (AGS 3.1.2 (a))
 * eine Begrüßung des Benutzers
 */

#include <stdio.h>

// max. name length
#define MAXCHARS 20

int main(int args, char** argv){
    char name[MAXCHARS];
    scanf("%s", name);

    printf("Hallo, %s!", name);

    return 0;
}