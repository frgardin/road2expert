#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_TENSORS 5000

typedef struct {
    int size;
    int align;
    int start;
    int end;
} Tensor;

void process(int tensorCount, Tensor* tensors, int* offsets);

int randRange(int lo, int hi) {
    return lo + rand() % (hi - lo + 1);
}

void generateCase(int seed, Tensor* tensors, int* n) {
    srand(seed);
    *n = randRange(100, MAX_TENSORS);

    int aligns[] = {32, 64, 128, 256};

    for (int i = 0; i < *n; i++) {
        tensors[i].align = aligns[rand() % 4];
        tensors[i].size  = randRange(1, 16) * tensors[i].align;
        tensors[i].start = randRange(0, 50);
        tensors[i].end   = tensors[i].start + randRange(1, 20);
    }
}

int validate_and_score(int n, Tensor* original, Tensor* result, int* offsets) {
    for (int i = 0; i < n; i++) {
        if (result[i].size  != original[i].size  ||
            result[i].align != original[i].align ||
            result[i].start != original[i].start ||
            result[i].end   != original[i].end) {
            printf("  INVALID: tensors array was modified at index %d\n", i);
            return 0;
        }
    }

    int peak = 0;
    for (int i = 0; i < n; i++) {
        if (offsets[i] < 0)                    { printf("  INVALID: offsets[%d] < 0\n", i);              return 0; }
        if (offsets[i] % result[i].align != 0) { printf("  INVALID: offsets[%d] alignment failed\n", i); return 0; }

        for (int j = i + 1; j < n; j++) {
            int live = !(result[i].end <= result[j].start ||
                         result[j].end <= result[i].start);
            if (!live) continue;

            int a_ok = offsets[i] >= offsets[j] + result[j].size;
            int b_ok = offsets[j] >= offsets[i] + result[i].size;
            if (!a_ok && !b_ok) {
                printf("  INVALID: tensors %d and %d overlap in memory\n", i, j);
                return 0;
            }
        }

        int top = offsets[i] + result[i].size;
        if (top > peak) peak = top;
    }
    return peak;
}

int main() {
    FILE* fin = fopen("sample_input.txt", "r");
    if (!fin) {
        printf("Error: could not open sample_input.txt\n");
        return 1;
    }

    Tensor* tensors = (Tensor*)malloc(sizeof(Tensor) * MAX_TENSORS);
    Tensor* backup  = (Tensor*)malloc(sizeof(Tensor) * MAX_TENSORS);
    int*    offsets = (int*)   malloc(sizeof(int)    * MAX_TENSORS);

    int T;
    fscanf(fin, "%d", &T);

    long long totalScore = 0;

    for (int t = 0; t < T; t++) {
        int seed;
        fscanf(fin, "%d", &seed);

        int n;
        generateCase(seed, tensors, &n);

        memcpy(backup, tensors, sizeof(Tensor) * n);

        for (int i = 0; i < n; i++) offsets[i] = 0;

        process(n, tensors, offsets);

        int peak = validate_and_score(n, backup, tensors, offsets);

        printf("Case #%d (seed=%d, n=%d): ", t + 1, seed, n);
        if (peak == 0) {
            printf("INVALID\n");
        } else {
            long long cte = 0;
            for (int i = 0; i < n; i++) cte += backup[i].size;
            long long score = (cte * 1000LL) / peak;
            printf("peak=%d  score=%lld\n", peak, score);
            totalScore += score;
        }
    }

    printf("\nTotal score: %lld\n", totalScore);

    fclose(fin);
    free(tensors);
    free(backup);
    free(offsets);
    return 0;
}
