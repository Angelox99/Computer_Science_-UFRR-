#include <stdio.h>

void min_max(int *vp, int *mint, int *maxt) {
  int i;
  *mint = vp[0], *maxt = vp[0];
  for (i = 0; i < 5; i++) {
    if (vp[i] < *mint) *mint = vp[i];
    if (vp[i] > *maxt) *maxt = vp[i];
  }
}

int main() {
  int v[5] = {10, 67, 34, 1, 80};
  int min, max;

  min_max(v, &min, &max);
  printf("Min: %d  Max: %d\n", min, max);
  return 0;
}
