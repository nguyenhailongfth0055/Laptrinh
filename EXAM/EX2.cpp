#include <stdio.h>

int soNT(int n) {
    if (n < 2) return 0;   
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int Dem = 0;
    printf("Prime numbers: ");
    for (int i = 0; i < n; i++) {
        if (soNT(arr[i])) {
            printf("%d ", arr[i]);
            Dem = 1;
        }
    }

    if (!Dem) {
        printf("No prime number");
    }
    printf("\n");
    return 0;
}

