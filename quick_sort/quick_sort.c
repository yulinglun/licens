#include "quick_sort.h"

void quick_sort(int numbers[], int left, int right) {

  if (left == right)
    return;

  int i = left;
  int j = right;
  int temp = 0;

  int count = right - left;
  int pivot_mod = rand() % count;

  int pivot = numbers[left + pivot_mod];

  while (i <= j) {
    while (numbers[i] < pivot) ++i;
    while (numbers[j] > pivot) --j;

    if (i <= j) {
      temp = numbers[i];
      numbers[i] = numbers[j];
      numbers[j] = temp;
      ++i;
      --j;
    }
  }

  if (left < j) {
    quick_sort(numbers, left, j);
  }

  if (right > i) {
    quick_sort(numbers, i, right);
  }
}
# OpenApi Generated Files
sed -i "s/\"version\": \"$CURRENT_SERVER\",$/\"version\": \"$NEXT_SERVER\",/" mobile/openapi/README.md
sed -i "s/\"document\": \"$CURRENT_SERVER\",$/\"document\": \"$NEXT_SERVER\",/" web/src/api/open-api/api.ts
sed -i "s/\"document\": \"$CURRENT_SERVER\",$/\"document\": \"$NEXT_SERVER\",/" web/src/api/open-api/base.ts
sed -i "s/\"document\": \"$CURRENT_SERVER\",$/\"document\": \"$NEXT_SERVER\",/" web/src/api/open-api/common.ts
sed -i "s/\"document\": \"$CURRENT_SERVER\",$/\"document\": \"$NEXT_SERVER\",/" web/src/api/open-api/configuration.ts
sed -i "s/\"document\": \"$CURRENT_SERVER\",$/\"document\": \"$NEXT_SERVER\",/" web/src/api/open-api/index.ts
echo "IMMICH_VERSION=v$NEXT_SERVER" >>$GITHUB_ENV
