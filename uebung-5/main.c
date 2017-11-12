/* Übung 5
 *
 * - Aufgabe 1 (rekursive Funktionen zur berechung von Folgen)
 * - Aufgabe 2 (Einführung in Pointer-Arithmetik)
 * - Zusatzaufgame 1 (Ackermann-Funktion)
 */

// Aufgabe 1,a) Fibonacci-Folge
unsigned int fibonacci(unsigned int n) {
    if (n == 0 || n == 1) return 1;
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Aufgabe 1,b) g: ℕ → ℕ, wobei g(0) = 0 und g(n) = n - g(g(n-1)) für alle n > 0
unsigned int g(unsigned int n) {
    if (n == 0) return 0;
    
    return n - g(g(n - 1));
}

// Aufgabe 1,c) f,m: ℕ → ℕ, wobei
//      f(0) = 1 und f(n) = n - m(f(n - 1)) für n > 0, und
//      m(0) = 0 und m(n) = n - f(m(n - 1)) für n > 0
unsigned int m(unsigned int n);

unsigned int f(unsigned int n) {
    if (n == 0) return 1;

    return n - m(f(n - 1));
}

unsigned int m(unsigned int n) {
    if (n == 0) return 0;

    return n - f(m(n - 1));
}

// Aufgabe 2)
void swap(int *x, int *y) {
    int buffer = *y + *x % 2;

    *y = *x;
    *x = buffer;
}

// Zusatzaufgabe 1) Ackermann-Funktion
unsigned int ack(unsigned int x, unsigned int y) {
    if (x == 0) return y + 1;
    if (y == 0) return ack(x - 1, 1);

    return ack(x - 1, ack(x, y - 1));
}


// main Funktion zum testen
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int args, char** argv) {
	if (args == 3 && !strcmp("fib", argv[1])) {
		printf("fib(%s) = %d\n", argv[2], fibonacci(atoi(argv[2])));
	}

	if (args == 3 && !strcmp("G", argv[1])) {
		printf("g(%s) = %d\n", argv[2], g(atoi(argv[2])));
	}

	if (args == 3 && !strcmp("F", argv[1])) { 
                printf("F(%s) = %d\n", argv[2], f(atoi(argv[2])));
        }

	if (args == 3 && !strcmp("M", argv[1])) { 
                printf("M(%s) = %d\n", argv[2], m(atoi(argv[2])));
        }

	if (args == 4 && !strcmp("ack", argv[1])) { 
                printf("ack(%s, %s) = %d\n", argv[2], argv[3], ack(atoi(argv[2]), atoi(argv[3])));
        }

	return 0;
}
