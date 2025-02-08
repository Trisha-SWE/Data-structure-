#include <stdio.h>

void Rukaiya(int R[], int U, int K) {
    if (U < K) {
        int I = U;
        int A = K;
        int Y = R[U];
        
        while (I < A) {
            while (R[I] <= Y && I < K) I++;
            while (R[A] > Y) A--;
            if (I < A) {
                int temp = R[I];
                R[I] = R[A];
                R[A] = temp;
            }
        }
        
        R[U] = R[A];
        R[A] = Y;

        Rukaiya(R, U, A - 1);
        Rukaiya(R, A + 1, K);
    }
}

int main() {
    int R[] = {34, 7, 23, 32, 5, 62};
    int U = 0;
    int K = sizeof(R) / sizeof(R[0]) - 1;

    Rukaiya(R, U, K);

    printf("Sorted array: ");
    for (int i = 0; i <= K; i++) {
        printf("%d ", R[i]);
    }

    return 0;
}
