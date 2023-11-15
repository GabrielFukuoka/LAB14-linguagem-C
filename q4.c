#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main() {
    int resultado = mdc(48, 18);
    printf("%d\n", resultado); 

    return 0;
}
