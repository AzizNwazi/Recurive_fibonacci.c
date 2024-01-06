
#include <stdio.h>

// Fibonacci dizisini hesaplamak i�in �zyinelemeli fonksiyon
int fibonacciRecursive(int);

int main() {
    int i, ustLimit;

    // Kullan�c�dan �st limiti al
    puts("Bir �st limit giriniz:");
    scanf("%d", &ustLimit);

    // Fibonacci dizisini �st limite kadar ekrana yazd�r
    for (i = 0; i < ustLimit; i++) {
        printf("%d ", fibonacciRecursive(i));
    }

    return 0;
}

// Fibonacci dizisini �zyinelemeli olarak hesaplayan fonksiyon
int fibonacciRecursive(int sayi) {
    // E�er say� 0 veya 1 ise kendisini d�nd�r
    if (sayi == 0 || sayi == 1) {
        return sayi;
    } else {
        // �zyineleme: Fibonacci dizisini hesapla
        return fibonacciRecursive(sayi - 1) + fibonacciRecursive(sayi - 2);
    }
}
