#include <stdio.h>

void printMultiplesOfSeven() {
    int num;
    for (num = 7; num < 100; num += 7) {
        printf("%d ", num);
    }
}

int main(){
    // Your code here!
    printf("Cac so nguyen co 2 chu so va la boi cua 7: ");
    printMultiplesOfSeven();
    printf("\n");

    return 0;
    
}
