#include <stdlib.h>

typedef struct {
    int size;
    int align;
    int start;
    int end;
} Tensor;

void process(int tensorCount, Tensor* tensors, int* offsets) {
    // TODO: assign offsets[i] for each tensor
    // Rules:
    //   1. offsets[i] >= 0
    //   2. offsets[i] % tensors[i].align == 0
    //   3. tensors live at the same time must not overlap in memory
    // Goal: minimize MAX(offsets[i] + tensors[i].size)
    //
    // WARNING: do NOT modify tensors[i] — the judge checks the backup
    // Use malloc for any scratch memory and free before returning
}
