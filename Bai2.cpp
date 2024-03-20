#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

void printPerfectSquares(int n) {
    int count = 0;
    int num = n - 1;

    printf("Cac so chinh phuong nho hon %d: ", n);
    while (count < 7 && num > 0) {
        if (isPerfectSquare(num)) {
            printf("%d ", num);
            count++;
        }
        num--;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap vao gia tri n: ");
    fflush(stdin);  // Xóa bộ nhớ đệm của bàn phím
    scanf("%d", &n);

    printPerfectSquares(n);

    return 0;
}