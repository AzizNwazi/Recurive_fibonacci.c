
#include <stdio.h>

// Fibonacci dizisini hesaplamak için özyinelemeli fonksiyon
int fibonacciRecursive(int);

int main() {
    int i, ustLimit;

    // Kullanýcýdan üst limiti al
    puts("Bir üst limit giriniz:");
    scanf("%d", &ustLimit);

    // Fibonacci dizisini üst limite kadar ekrana yazdýr
    for (i = 0; i < ustLimit; i++) {
        printf("%d ", fibonacciRecursive(i));
    }

    return 0;
}

// Fibonacci dizisini özyinelemeli olarak hesaplayan fonksiyon
int fibonacciRecursive(int sayi) {
    // Eðer sayý 0 veya 1 ise kendisini döndür
    if (sayi == 0 || sayi == 1) {
        return sayi;
    } else {
        // Özyineleme: Fibonacci dizisini hesapla
        return fibonacciRecursive(sayi - 1) + fibonacciRecursive(sayi - 2);
    }
}
