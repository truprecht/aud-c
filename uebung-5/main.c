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
    int buffer = *y + *x mod 2;

    *y = *x;
    *x = buffer;
}

// Zusatzaufgabe 1) Ackermann-Funktion
unsigned int ack(unsigned int x, unsigned int y) {
    if (x == 0) return y + 1;
    if (y == 0) return ack(x - 1, 1);

    return ack(x - 1, ack(x, y - 1));
}