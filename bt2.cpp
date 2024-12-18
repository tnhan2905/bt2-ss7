#include <stdio.h>

int main() {
    int mang[8];  

    printf("Nhap 8 phan tu cho mang:\n");
    for (int i = 0; i < 8; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &mang[i]); 
    }
    printf("Mang sau khi nhap la:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n"); 

    return 0;
}
